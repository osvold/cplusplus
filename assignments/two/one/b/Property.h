//
// Created by hans on 20/03/2018.
//

#ifndef B_PROPERTY_H
#define B_PROPERTY_H


class Property {
    public:
        Property(int county, int estate, int lot, int leased);
        Property(const Property& copy_from);
        Property& operator=(const Property& copy_from);
        ~Property();

        int GetCounty() const;
        int GetEstate() const;
        int GetLot() const;
        int GetLeased() const;

        void SetCounty(int county);
        void SetEstate(int estate);
        void SetLot(int lot);
        void SetLeased(int leased);
    private:
        int county;
        int estate;
        int lot;
        int leased;
};


#endif //B_PROPERTY_H
