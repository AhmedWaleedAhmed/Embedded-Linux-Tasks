// ################################################### Task #5 description ###################################################
// # handle interrupt signal like (ctrl+c)
// # ref: https://www.tutorialspoint.com/how-do-i-catch-a-ctrlplusc-event-in-cplusplus
// ###########################################################################################################################


#include <iostream>
#include <signal.h>

void signal_callback_handler(int signum) {
   std::cout << "Caught signal " << signum << std::endl;
   exit(signum);
}
int main(){
   signal(SIGINT, signal_callback_handler);
   while(true){
      std::cout << "Program processing..." << std::endl;
      sleep(1);
   }
   return EXIT_SUCCESS;
}