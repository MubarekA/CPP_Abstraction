//
//  Product.h
//  Product
//
//  Created by mac on 12/21/19.
//  Copyright © 2019 mac. All rights reserved.
//

#ifndef Product_h
#define Product_h
#include <string>
#include <iostream>
using namespace std;


class product {
private:
    string productId;
    string productType;
    double productPrice;
    int yearofRelease;
    
public:
    product() {
        this->productId="";
        this->productType="";
        this->productPrice=0.0;
        this->yearofRelease=0;
    }
    product( string productId,string productType,double productPrice,int yearofRelease) {
        this->productId=productId;
        this->productType=productType;
        this->productPrice=productPrice;
        this->yearofRelease=yearofRelease;
        
    }
    
    
    void setProductId(string productId) {
        this->productId= productId;
    }
    string getProductId() {
        return this->productId;
    }
    void setProductType(string productType) {
        this->productType = productType;
    }
    string getProductType() {
        return this->productType;
    }
    void setProductPrice(double productPrice) {
        this->productPrice=  productPrice;
    }
    double getProductPrice(){
        return this->productPrice;
    }
    void setYearofRelease(int yearofRelease) {
        this->yearofRelease=yearofRelease;
    }
    int getYearofRelease() {
        return this->yearofRelease;
    }
    
    
};


#endif /* Product_h */
