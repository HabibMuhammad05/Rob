//----------------HC-05 Bluetooth--------------------//
//-----untuk yang ada garis miring 2 (//)------------// 
//----Hapus dan sesuaikan dengan program.------------//
//--gabungkan program untuk HC-05 dan L298N----------//
//--Tambahkan penjelasan untuk setiap baris----------//
//Waktu pengerjaan sampai pertemuan selanjutnya------//
//---------Usahakan kirim secepatnya.----------------//
//--------kirim Tugas melalui Whatsapp---------------//
//Tugas harus sudah berhasil compile(tidak ada error)//
//-----Boleh sambil berdiskusi dengan yang lain------//

#include <SoftwareSerial.h>
SoftwareSerial bt (3,4);
void setup() {
    Serial.begin(9600);
    bt.begin(9600);
}

void loop() {
  String perintah;
  if(bt.available() !=0){
    perintah = bt.readString();
    perintah.toUpperCase();
    Serial.println(perintah);

    if(perintah == "MAJU"){
      //perintah maju untuk motor driver
    }
    else if(perintah == "MUNDUR"){
      //perintah Mundur untuk motor driver
    }
    //dst
  }
}
