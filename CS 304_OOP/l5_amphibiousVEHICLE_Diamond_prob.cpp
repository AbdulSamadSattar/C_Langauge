#include <iostream>
using namespace std;
class vehicle{
    public:
        void changegear(){
            cout<<"Change Gear";
        }
};

class land_vehicle : public vehicle
{

};

class water_vehicle : public vehicle
{

};

class amphibious_vehicle : public land_vehicle, public water_vehicle
{

};

int main(){
    land_vehicle land;
    water_vehicle water;
    amphibious_vehicle amp;
    cout<<endl<<"Land Vehicle:";
    land.changegear();
    cout<<endl<<"Water Vehicle:";
    water.changegear();
    cout<<endl<<"Amphibious Vehicle:";
    amp.land_vehicle::changegear();
    return 0;
}