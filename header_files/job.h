#include<iostream>
class Job{
    private:
        int status;
        std::string name;
        std::string arguments[];

        


    public:
        Job(int status, std::string name, std::string arguments){

        }

        int getStatus(){return this->status;}
        void setStatus(){this->status = status;}
        std::string getName(){return this->name;}
        void setName(std::string name){this->name = name;}
        



};