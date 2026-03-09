#include <iostream>
using namespace std;

    float Berat_tinggi(float berat, float tinggi){
        return berat/(tinggi*tinggi);
    }

        string Status_BMI(float bmi){
            if (bmi<18.5)
                return "Berat Badan Tidak Ideal";
            else  (bmi>=18.5 && bmi<25)
                return "Berat Badan Normal";
            else (bmi>=25 && bmi<30)
                return "Berat Badan Obesitas";
        }

        int main() {
        float berat, tinggi, bmi;   
        string status;

        
        cout<<"Masukkan berat badan (kg) = ";
        cin>>berat;
        cout<<"Masukkan tinggi badan (m) =  ";
        cin>>tinggi;

        bmi = Berat_tinggi(berat, tinggi);

        
        cout<<"BMI Anda adalah "<<bmi<<endl;
        cout<<"Status "<< Status_BMI(bmi)<<" , dengan BMI: "<<bmi<<endl;
    }
   