#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   l:
    char word,go;
    std::cout<<"Enter (R) for Rock, (S) for Scissors or(P) for Paper:";
    std::cin>>word;
    int w(word);
   switch(w){
   case 'r' : w = 1;
       break;
   case 's' : w = 2;
       break;
   case 'p' : w = 3;
       break;
   default:
   {
       std::cout<<"Enter correct sign!\n";
       goto l;
   }
   }
    go = rand() % 3 + 1;
    switch(go){
    case 1 : std::cout<<"Rock\n";
        break;
    case 2 : std::cout<<"Scissors\n";
        break;
    case 3 : std::cout<<"Paper\n";
        break;
    }
    if(w == go){
        std::cout<<"Zero\n";
    }
    if(w == 1){
        if(go == 3){
            std::cout<<"You win!\n";
        }
         if(go ==  2) {
            std::cout<<"You lose!\n";
        }
    }

     if(w == 2){
             if(go == 1){
                 std::cout<<"You win!\n";
             }
              if(go ==  3) {
                 std::cout<<"You lose!\n";
             }
     }

     if(w == 3){
             if(go == 2){
                 std::cout<<"You win!\n";
             }
              if(go ==  1) {
                 std::cout<<"You lose!\n";
             }
     }
     std::cout<<"Press c to continue\n";
     std::cout<<"Press any other key to quit\n";
     char b;
     std::cin>>b;
     int k(b);
     if(k == 'c' || k == 'C'){
         goto l;
     }

    return 0;
}
