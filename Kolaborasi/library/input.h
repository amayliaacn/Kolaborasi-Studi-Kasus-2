using namespace std;

class Input{
  public :
    void cetak(){
      cout<<"===================================="<<endl;
      cout<<"==== Aplikasi Rumah Makan Ceria ==== \n";
      cout<<"===================================="<<endl;
      cout<<"Menu Utama :"<<endl;
      cout<<"1) Ayam Geprek      Rp 21.000 \n";
      cout<<"2) Ayam Goreng      Rp 17.000\n";
      cout<<"3) Udang Goreng     Rp 19.000\n";
      cout<<"4) Cumi Goreng      Rp 20.000\n";
      cout<<"5) Ayam Bakar       Rp 25.000\n\n";
      cout<<"Pesan Ayam Geprek    : ";cin>>bnyk_aymgprk;
      cout<<"Pesan Ayam Goreng    : ";cin>>bnyk_aymgrng;
      cout<<"Pesan Udang Goreng   : ";cin>>bnyk_udggrng;
      cout<<"Pesan Cumi Goreng    : ";cin>>bnyk_cumigrng;
      cout<<"Pesan Ayam Bakar     : ";cin>>bnyk_aymbkr;
    }
    void toFile(){
      tulis_Data.open("api_data.txt");
      tulis_Data<< bnyk_aymgprk<<endl;
      tulis_Data<< bnyk_aymgrng<<endl;
      tulis_Data<< bnyk_udggrng << endl;
      tulis_Data<< bnyk_cumigrng<<endl;
      tulis_Data<<bnyk_aymbkr;
      tulis_Data.close();
    }

  private :
    ofstream tulis_Data;
    int bnyk_aymgprk;
    int bnyk_aymgrng;
    int bnyk_udggrng;
    int bnyk_cumigrng;
    int bnyk_aymbkr;
};