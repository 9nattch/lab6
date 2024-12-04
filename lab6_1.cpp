#include<iostream>
using namespace std;

int main(){
    int number;
    int even_number = 0;//เริ่มจาก 0 เพิ่อจะเพิ่มค่าต่อไปเรื่อยๆ
    int odd_number = 0;

    cout << "Enter an integer: ";//ถามตั้งเเต่เริ่มต้นเพื่อจะเอาค่าไปทำอันต่อไป
    cin >> number;

    while(number != 0){ //ถ้าเท่ากับ 0 ก็จะเลิกทำงานทันที
        if(number % 2 == 0){
            even_number++; //ที่ใส่++ เพราะว่าจะเพิ่มค่าขึ้นตามจำนวนตัวเลขที่หาร2ลงตัว
        }else{
            odd_number++; //เพิ่มค่าตามจำนวนที่หาร2ไม่ลงตัว
        }
        cout << "Enter an integer: ";//ถามวนอยู่ในลูป
        cin >> number;

    }
    cout << "#Even numbers = "<< even_number <<"\n";
    cout << "#Odd numbers = " << odd_number <<"\n";
    return 0;
}
