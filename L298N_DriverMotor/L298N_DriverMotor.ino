//-----------------L298N motor driver----------------//
//----------untuk yang ada garis miring 2 (//)-------// 
//---------Hapus dan sesuaikan dengan program.-------//
//-------gabungkan program untuk HC-05 dan L298N-----//
//-tidak perlu menggunakan variabel speed(motorspeed)//
//-------Tambahkan penjelasan untuk setiap baris.----//
//----Waktu pengerjaan sampai pertemuan selanjutnya--//
//-------------Usahakan kirim secepatnya.------------//
//------------kirim Tugas melalui Whatsapp-----------//
//Tugas harus sudah berhasil compile(tidak ada error)//
//-----Boleh sambil berdiskusi dengan yang lain------//

int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;
void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
}

void loop() {
  // Maju
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(in3,LOW);

  //Mundur
    //dst.

}
