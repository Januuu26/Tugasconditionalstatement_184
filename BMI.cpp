#include <iostream>
using namespace std;

    float Berat_tinggi(float berat, float tinggi){
        return berat/(tinggi*tinggi);
    }

        string Status_rata(float rata){
            if (rata<18.5)
                return "Berat Badan Tidak Ideal";
            else if (rata>=18.5 && rata<25)
                return "Berat Badan Normal";
            else if (rata>=25 && rata<30)
                return "Berat Badan Obesitas";
        }

        int main() {
        float berat, tinggi, rata;   
        string status;

        
        cout<<"Masukkan berat badan (kg) = ";
        cin>>berat;
        cout<<"Masukkan tinggi badan (m) =  ";
        cin>>tinggi;

        rata = Berat_tinggi(berat, tinggi);

        
        cout<<"BMI Anda adalah "<<rata<<endl;
        cout<<"Status "<< Status_rata(rata)<<" , dengan BMI: "<<rata<<endl;
    }
   