#include <iostream>
#include <string>
using namespace std;

int main () {

  string playerName;
  int score = 0, life = 3;
  char choice1,choice2;

  // ประกาศตัวแปรเพื่อรับการเลือกคำตอบของผู้เล่น
  // เช่นการเป็น ตัวเลขให้ประกาศเป็น int choice1;
  // ถ้ารับคำตอบเป็นตัวอักษร ให้ประกาศเป็น char choice1;
  //

  cout << "Welcome to Mini Adventure Game." << endl;
  cout << "Please enter your name : ";
  cin >> playerName;


// แสดงชื่อ โดยตัดให้เหลือแค่ 10 ตัวอักษร
    if (playerName.length() > 8 ){
            cout << "Your name is too long!!!!" << endl;
           playerName.erase (playerName.begin()+8, playerName.end());
            cout << "Your name has been changed to " << playerName << endl;
    }
    else {cout << playerName << endl;}


  // เขียนคำสั่งแสดงผล คำบรรยายสภาพแวดล้อม สถานการณ์ และคำทักทายที่มีชื่อตัวละคร
  // เช่น cout << "Hello " << playerName << ". You are in Robinson. You are walking happily. Suddenly you realize that forgetting the wallet."
  // << " But you're lazy to get back to get it." << endl;
   cout << "Hello " << playerName << ". You are in plane. You drop off the plane. Suddenly you forgot the phone on the plane."
   cout << " But you have to get back to it." << endl;


  // เขียนคำสั่งแสดงผล คำถามให้ผู้ใช้ตัดสินใจ
  // เช่น cout << "What should you do? (A)sk for money,(S)teal : ";
  cout << "What should you do? (A)sk for phone,(S)teal : ";



  // เขียนคำสั่งรับคำตอบจากผู้ใช้ แล้วให้คะแนนหรือทำโทษ จากการตัดสินใจนั้น
  // เช่น
  //     cin >> choice1;
  //     switch(choice1) {
  //        case "S" : score += 10; life -= 1; cout << "You stole money from people. Now you can shopping.";
  //        case "A" : score += 50; cout << "You ask for money from people then you get 100 baht. You are very happy. Now you can shopping."
  //     }
  cin >> choice1;
      switch(choice1) {
        case "A" : score += 50;
        cout << "You will ask the staff to take the phone.You are very happy."
        case "S" : score += 10;
        life -= 1;
        cout << "You sneak up to take the phone without telling the officer.";
    }




  // ฝึกสร้างสถานการณ์และสร้างเงื่อนไข อีก 2 สถานการณ์
  cout << "next time " << playerName << ". You are in airport. You walk out waiting for mom to pick up. Suddenly the phone is out of battery."
  cout << " But you need to contact the mother." << endl;
  cout << "What should you do? (B)sk for phone,(C)teal : ";
  cin >> choice2;
      switch(choice2) {
        case "A" : score += 50;
        cout << "You will borrow the staff phone."
        case "S" : score += 10;
        life -= 1;
        cout << "Will you wait.";
    }


  // สรุปผลคะแนนและพลังชีวิต เช่น cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;
  cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;

  return 0;
}
