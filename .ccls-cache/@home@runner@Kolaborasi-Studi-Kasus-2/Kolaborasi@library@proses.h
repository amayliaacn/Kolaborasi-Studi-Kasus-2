using namespace std;

class Proses{
  public :
    void cetak(){
      cout<<"Anda sebagai Proses \n";
    }
    void getData(){
      ambil_Data.open("api_data.txt");
      bool ayam_geprek=true,ayam_grng=true,udang_grng=true,cumi_grng=true,ayam_bkr=true;
      while(!ambil_Data.eof()){
          if(ayam_geprek){
            ambil_Data>>bnyk_aymgprk;
            ayam_geprek=false;
          }
          else if (ayam_grng){
            ambil_Data>>bnyk_aymgrng;
            ayam_grng=false;
          }
          else if(udang_grng){
            ambil_Data>>bnyk_udggrng;
            udang_grng=false;
          }
          else if (cumi_grng){
            ambil_Data>>bnyk_cumigrng;
            cumi_grng=false;
          }
          else{
            ambil_Data>>bnyk_aymbkr;
          }
      }
    ambil_Data.close();
      cout<<"banyak ayam geprek : "<<bnyk_aymgprk<<endl;
      cout<<"banyak ayam goreng : "<<bnyk_aymgrng<<endl;
      cout<<"banyak udang goreng : "<<bnyk_udggrng<<endl;
      cout<<"banyak cumi goreng : "<<bnyk_cumigrng<<endl;
      cout<<"banyak ayam bakar : "<<bnyk_aymbkr;
    }
void toFile(){
  int total=(hrg_aymgprk*bnyk_aymgprk)+(hrg_aymgrng*bnyk_aymgrng)+(hrg_udggrng*bnyk_udggrng)+(hrg_cumigrng*bnyk_cumigrng)+(hrg_aymbkr*bnyk_aymbkr);
  float batas=16000;
  float biaya_ongkir=15000;
  float t2=float(total);
  float diskon_ong = 8000;
  float diskon= t2 * 0.35;
  float ttldiskon = diskon_ong + diskon;
  if(total>=batas)
    t2=t2+biaya_ongkir-ttldiskon ;

    tulis_Data.open("api_data.txt");
  tulis_Data<<total<<endl;
  tulis_Data<<diskon<<endl;           
  tulis_Data<<diskon_ong<<endl;
  tulis_Data<<biaya_ongkir<<endl;
  tulis_Data<<t2<<endl;
  tulis_Data<<bnyk_aymgprk<<endl;
  tulis_Data<<bnyk_aymgrng<<endl;
  tulis_Data<<bnyk_udggrng<<endl;
  tulis_Data<<bnyk_cumigrng<<endl;
  tulis_Data<<bnyk_aymbkr;
  tulis_Data.close();
}

private :
  ifstream ambil_Data;
  ofstream tulis_Data;
  int bnyk_aymgprk;
  int bnyk_aymgrng;
  int bnyk_udggrng;
  int bnyk_cumigrng;
  int bnyk_aymbkr;
  int hrg_aymgprk = 21000;
  int hrg_aymgrng = 17000;
  int hrg_udggrng = 19000;
  int hrg_cumigrng = 20000;
  int hrg_aymbkr = 25000;
  float diskon;
  float diskon_ong;
  float biaya_ongkir;
};