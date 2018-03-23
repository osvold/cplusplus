//
// Created by hans on 20/03/2018.
//
#include "Property.h"

Property::Property(int countyParam, int estateParam, int lotParam, int leasedParam) {
    if(countyParam > 0 && countyParam <= 5444) {
        county = countyParam;
    } else {
        county = 0;
    }

    estate = estateParam;
    lot = lotParam;
    leased = leasedParam;
}

Property::Property(const Property &copy_from) {
    county = copy_from.county;
    estate = copy_from.estate;
    lot = copy_from.lot;
    leased = copy_from.leased;
}

Property& Property::operator=(const Property &copy_from) {
    county = copy_from.county;
    estate = copy_from.estate;
    lot = copy_from.lot;
    leased = copy_from.leased;
}

Property::~Property() = default;

int Property::GetCounty() const {
    return county;
}

void Property::SetCounty(int countyParam) {
    if(countyParam > 0 && countyParam <= 5444) {
        county = countyParam;
    } else {
        county = 0;
    }
}

int Property::GetEstate() const {
    return estate;
};

void Property::SetEstate(int estateParam) {
    estate = estateParam;
}

int Property::GetLot() const {
    return lot;
}

void Property::SetLot(int lotParam) {
    lot = lotParam;
}

int Property::GetLeased() const {
    return leased;
}

void Property::SetLeased(int leasedParam) {
    leased = leasedParam;
}