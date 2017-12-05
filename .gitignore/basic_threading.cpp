#include <iostream>      
#include <thread>        

 


void thread_1() {
  std::cout <<"thread 1"<<std::endl;
}


void thread_2() {
  std::cout <<"thread 2"<<std::endl;
}


void thread_3(){
std::cout<<"thread 3"<<std::endl;
}
 


int main (){


  std::thread thread1,thread2,thread3;

  thread1 = std::thread(thread_1);
  thread2 = std::thread(thread_2);
  thread3 = std::thread(thread_3);

  thread1.join();
  thread2.join();
  thread3.join();

  return 0;

}
