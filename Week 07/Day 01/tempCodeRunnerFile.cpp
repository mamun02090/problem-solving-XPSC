if (clock == a_clock)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if ((a_clock == 0 && clock != 0 && clock % 360 == 0) || (clock == 0 && a_clock != 0 && a_clock % 360 == 0))
        {
            cout << "YES" << endl;
            return 0;
        }