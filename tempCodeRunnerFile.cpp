 else if (response == 3)
    {
       cout << "Are you sure?\n";
       cout << "--------------------\n";
       cout << "(1) Yes\n";
       cout << "--------------------\n";
       cout << "(2) No\n";
       cout << "--------------------\n";
       cin >> response2;
           if (response2 == 1){
           cout << "Thank you! Rest assured that your information is well kept.\n";
           break;
           }else if (response2 == 2){
            cout << "\n";
           }
        }
    } while (response != 3 || response2 == 2);
