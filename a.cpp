int main()
{
char c;
    int first_num = 0;
    int next_num = 0;

    while (cin >> c) {

        if (c == '^') // sees square
         {
            cin >> next_num;
            first_num = next_num*next_num;

        }
        else if (c == '+') //sees addition 
        {
            cin >> next_num;
            first_num = first_num + next_num; // next integer is added to first
        
        }

        else if (c == '-') //sees if it is subtraction
        { 
            cin >> next_num;
            first_num = first_num - next_num;
        }

        else if (c == ';') //sees semicolon and output to print on new line
        { 
            cout << first_num << endl;
            cin >> first_num;
        }
        
    }
    return 0;

}