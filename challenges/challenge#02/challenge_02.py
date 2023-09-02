#!/usr/bin/python3

################################################### challenge #1 description ###################################################
# Update the Alexa script with some new ideas.
# 1- I'll add the mute feature which can mute the mic of the laptop but there will be no way to enable it again from the voice.
# 2- I'll get my IP and save it to the clipboard
###########################################################################################################################

# import library
import webbrowser
from time import ctime
import os
import pyclip
import socket
import playsound
from gtts import gTTS
import speech_recognition as sr

# Initialize recognizer class (for recognizing the speech)
r = sr.Recognizer()


# Reading Audio file as source
# listening the audio file and store in audio_text variable
def Bixby_Speak(audios):
    tts = gTTS(text=audios, lang='en')
    audioF = 'audio.mp3'
    tts.save(audioF)
    playsound.playsound(audioF)
    print(audios)
    os.remove(audioF)


def record(ask=False):
    with sr.Microphone(device_index=None) as source:
        print(source)
        r.adjust_for_ambient_noise(source)
        if ask:
            Bixby_Speak(ask)
        audio = r.listen(source)
        voice_data = ''
        try:
            voice_data = r.recognize_google(audio, language="en")
            print(voice_data)
        except sr.UnknownValueError:
            print("sorry i did not get that")
        except sr.RequestError:
            Bixby_Speak("sorry Service is Down")
        return voice_data.lower()

def Respond(voice_data):
    if 'name' in voice_data:
        Bixby_Speak('Ahmed Waleed')
    if 'time' in voice_data or 'hour' in voice_data:
        Bixby_Speak(ctime())
    if 'search' in voice_data or 'google' in voice_data:
        Bixby_Speak('what do want to search?')
        search = record()
        url = 'https://www.google.com/search?q=' + search
        webbrowser.get().open(url)
        Bixby_Speak('Here is what i Found For' + search)
    if 'mute' in voice_data or 'mic' in voice_data:
        os.system('amixer set Capture toggle')
        Bixby_Speak("The mic is muted successfully so you will not be able to use me again even if you re-enable the mic; so I will terminate myself now and reopen me once you enable the mic again.")
        exit()
    if 'ip' in voice_data:
        hostname = socket.gethostname()
        ip_address = socket.gethostbyname(hostname)
        pyclip.copy(ip_address)


    if 'exit' in voice_data:
        exit()
    

Bixby_Speak('How Can I help You')
while 1:
    voice_data = record()
    Respond(voice_data)
