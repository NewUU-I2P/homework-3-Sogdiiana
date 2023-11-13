void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    float water ;

    if (water <= 30 )
    {
        cost = 13 + water*0.4;
        cout << "You should pay : " << cost << endl;
    }
    else if (water <= 50 )
    {
        cost = 13 + 30*0.4 + (water-30)*0.12;
        cout << "You should pay : " << cost << endl;
    }
    else if (water <= 60 )
    {
        cost = 13 + 30*0.4 + 20*0.12 +(water-50)*1.4;
        cout << "You should pay : " << cost << endl;
    }
    else
    {
        cost = 13 + 30*0.4 + 20*0.12 + 10*1.4 + (water-60)*1.5;
        cout << "You should pay : " << cost << endl;
    }



}
