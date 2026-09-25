#include <iostream>
#include <string>
using namespace std;

int main()
{
    char Continue = 'Y';
    int What_Use = 0;
    string HexVal;

    int HexR1 = 0;
    int HexR2 = 0;

    int HexG1 = 0;
    int HexG2 = 0;

    int HexB1 = 0;
    int HexB2 = 0;

    bool ValidInput = true;

    while(Continue == 'Y' || Continue == 'y')
    {
        //Asks what type of color selection to use
    cout << "Please select how to input color values:"<< endl <<"1. Names (Does not work)"<< endl <<"2. RGB (Does not work)" << endl <<"3. Hex"<< endl;
    cin >> What_Use;

    switch (What_Use)
    {
        // case 1:
        // names section
        //break

        // case 2:
        // RGB section 
        //break

        case 3:
        cout << "Input the Hex value like the example: " << endl;
        cout << "f49c2e" << endl;
        cin >> HexVal;
        break;

        default:
        cout << "Invalid option"<< endl;
        return 1;
    }



        //checks to see if the length is correct
    if (HexVal.length() != 6)
    {
        cout << "Invalid number: Incorect Length" << endl;
        ValidInput = false;
    }
    


        //Checks to see if inputed Hex values are possible
    if (HexVal[0] >= 'g' || (HexVal[0] >= 'A' && HexVal[0] <= 'Z'))
    {
        // cout << HexVal[0] << endl;
        cout << "Invalid number: 1"<< endl;
        ValidInput = false;
    }

    if (HexVal[1] >= 'g' || (HexVal[1] >= 'A' && HexVal[1] <= 'Z'))
    {
        // cout << HexVal[1] << endl;
        cout << "Invalid number: 2"<< endl;
        ValidInput = false;
    }

    if (HexVal[2] >= 'g' || (HexVal[2] >= 'A' && HexVal[2] <= 'Z'))
    {
        // cout << HexVal[2] << endl;
        cout << "Invalid number: 3"<< endl;
        ValidInput = false;
    }

    if (HexVal[3] >= 'g' || (HexVal[3] >= 'A' && HexVal[3] <= 'Z'))
    {
        // cout << HexVal[3] << endl;
        cout << "Invalid number: 4"<< endl;
        ValidInput = false;
    }

    if (HexVal[4] >= 'g' || (HexVal[4] >= 'A' && HexVal[4] <= 'Z'))
    {
        // cout << HexVal[4] << endl;
        cout << "Invalid number: 5"<< endl;
        ValidInput = false;
    }

    if (HexVal[5] >= 'g' || (HexVal[5] >= 'A' && HexVal[5] <= 'Z'))
    {
        // cout << HexVal[5] << endl;
        cout << "Invalid number: 6"<< endl;
        ValidInput = false;
    }
    


if (ValidInput == true)
{
        // Converting red ascii values to hex
    if (HexVal[0] >= '0' && HexVal[0] <= '9')
    {
        HexR1 = HexVal[0] - '0';
    }
    else if (HexVal[0] >= 'a' && HexVal[0] <= 'f')
    {
        HexR1 = HexVal[0] - 'a' + 10;
    }

    if (HexVal[1] >= '0' && HexVal[1] <= '9')
    {
        HexR2 = HexVal[1] - '0';
    }
    else if (HexVal[1] >= 'a' && HexVal[1] <= 'f')
    {
        HexR2 = HexVal[1] - 'a' + 10;
    }

        int Red = HexR1 * 16 + HexR2;
        // cout << Red <<endl;



       // Converting green ascii values to hex
    if (HexVal[2] >= '0' && HexVal[2] <= '9')
    {
        HexG1 = HexVal[2] - '0';
    }
    else if (HexVal[2] >= 'a' && HexVal[2] <= 'f')
    {
        HexG1 = HexVal[2] - 'a' + 10;
    }

    if (HexVal[3] >= '0' && HexVal[3] <= '9')
    {
        HexG2 = HexVal[3] - '0';
    }
    else if (HexVal[3] >= 'a' && HexVal[3] <= 'f')
    {
        HexG2 = HexVal[3] - 'a' + 10;
    }

        int Green = HexG1 * 16 + HexG2;
        // cout << Green <<endl;



    // Converting Blue ascii values to hex
    if (HexVal[4] >= '0' && HexVal[4] <= '9')
    {
        HexB1 = HexVal[4] - '0';
    }
    else if (HexVal[4] >= 'a' && HexVal[4] <= 'f')
    {
        HexB1 = HexVal[4] - 'a' + 10;
    }

    if (HexVal[5] >= '0' && HexVal[5] <= '9')
    {
        HexB2 = HexVal[5] - '0';
    }
    else if (HexVal[5] >= 'a' && HexVal[5] <= 'f')
    {
        HexB2 = HexVal[5] - 'a' + 10;
    }

        int Blue = HexB1 * 16 + HexB2;
        // cout << Blue <<endl;

    //Calculates if one of the colors is dominate over the other colors
    int How_Red = Red - ((Green + Blue)/2);
    int How_Blue = Blue - ((Green + Red)/2);
    int How_Green = Green - ((Red + Blue)/2);

    // cout << How_Red << How_Green << How_Blue <<endl;


    // Displays what type of colors from 4 color blindness would be affected by the inputed color
    if (How_Red > 127)
    {
        cout << "People with Protanopia may have trouble distinguishing: Blacks, Dark Browns, and Blues" << endl;
        cout << "People with Deuteranopes may have trouble distinguishing: Greens and Browns" << endl;
        cout << "People with Tritanopes may have trouble distinguishing: Oranges" << endl;
        cout << "People with Dichromacy may have trouble distinguishing: Greens" << endl;
    }

    else if (How_Green > 127)
    {
        cout << "People with Protanopia may have trouble distinguishing: Blacks, Dark Browns, and Oranges" << endl;
        cout << "People with Deuteranopes may have trouble distinguishing: Reds, Greys, Pinks, and Yellows" << endl;
        cout << "People with Tritanopes may have trouble distinguishing: Blues" << endl;
        cout << "People with Dichromacy may have trouble distinguishing: Reds" << endl;
    }

    else if (How_Blue > 127)
    {
        cout << "People with Protanopia may have trouble distinguishing: Reds, Purples, and Pinks" << endl;
        cout << "People with Deuteranopes may have trouble distinguishing: Greys, Pinks, and Lilacs" << endl;
        cout << "People with Tritanopes may have trouble distinguishing: Greys, Purples, and Blacks" << endl;
    }


    else
    {
        cout << "The Color seems to have no conflicts over Protanopia, Deuteranopes, Tritanopes, Dichromacy color blindness"<< endl;
    }

}
        //User input to restart
        cout << endl << "Would you like to restart?" << endl << "Y/N" << endl;
        cin >> Continue;

        //Ensures that only typing y restarts the code
    // if (Continue != 'y' || Continue != 'Y' || Continue != 'n' || Continue != 'N')
    // {
        // Continue = 'N';
    // }




    }
  return 0;
}
