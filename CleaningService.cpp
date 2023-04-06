#include <iostream>
using namespace std;

main()
{
    int smallRoomsNumber {0};
    int largeRoomsNumber {0};
    const double smallRoomPrice = {25};
    const double largeRoomPrice = {35};
    const int NumberOfDays = {30};


    cout<<"Welcome to Frank's Cleaning Service"<<endl;

    cout<<"\nHow many small rooms would you like cleaned? ";
    cin>>smallRoomsNumber;
    cout<<"How many large rooms would you like cleaned? ";
    cin>>largeRoomsNumber;

    cout<<"\nEstimate for carpet cleaning service"<<endl;

    cout<<"Number of small rooms: "<<smallRoomsNumber<<endl;
    cout<<"Number of Large rooms: "<<largeRoomsNumber<<endl;

    cout<<"Price per small room: $"<<smallRoomPrice<<endl;
    cout<<"Price per large room: $"<<largeRoomPrice<<endl;

    cout<<"Cost: $"<<(smallRoomsNumber*smallRoomPrice)+(largeRoomsNumber*largeRoomPrice)<<endl;
    cout<<"Tax: $"<<((smallRoomsNumber*smallRoomPrice)+(largeRoomsNumber*largeRoomPrice))*0.06<<endl;
 
    cout<<"==============================="<<endl;

    cout<<"Total estimate: $"<<(smallRoomsNumber*smallRoomPrice)+(largeRoomsNumber*largeRoomPrice)+((smallRoomsNumber*smallRoomPrice)+(largeRoomsNumber*largeRoomPrice))*0.06<<endl;
    cout<<"This estimate is valid for "<<NumberOfDays<<" days"<<endl;










    return 0;
}