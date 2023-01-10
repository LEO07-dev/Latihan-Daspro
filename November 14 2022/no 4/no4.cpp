//judul : no 4
//Programer : Azmi Jalaluddin Amron
//Modify    : ke 1 pada 14/11/2022

//kamus
    int A, Be, Ce;

//deskripsi
    int main()
    {
        cout << "A= "; cin >> A;
        cout << "Be= "; cin >> Be;
        cout << "Ce= "; cin >> Ce;
        cout << "Mana yang lebih besar ? " << endl;
        if (A>Be && Be>Ce || A>Ce && Ce>Be)
        {
            cout << "A paling besar" << endl;
        }
        else if (Be>A && A>Ce || Be>Ce && Ce>A)
        {
            cout << "Be paling besar" << endl;
        }
        else if (Ce>A && A>Be || Ce>Be && Be>A)
        {
            cout << "Ce paling besar" << endl;
        }
        else if (A==Be || Be==Ce || A==Ce)
        {
            cout << "entah." << endl;
        }

        return 0;
    }
