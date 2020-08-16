//
//  Music.h
//  Product
//
//  Created by mac on 12/21/19.
//  Copyright © 2019 mac. All rights reserved.
//

#include"Product.h"

class Music : public product {
private:
    string artistName;
    string albumName;
public:
    
    
    Music() : product() {
        this->artistName="";
        this->albumName="";

    }
    Music( string artistName,string albumName,string productId, string productType,double productPrice, int yearofRelease) : product(productId,productType,productPrice,yearofRelease) {
        this->artistName = artistName;
        this->albumName = albumName;
        
        
    }
    
    
    void setArtistName(string artistName) {
        this->artistName=artistName;
    }
    string getArtistName(){
        return this->artistName;
    }
    void setAlbumName(string albumName) {
        this->albumName=albumName;
    }
   void display() {
        cout<<"Product ID: "<<getProductId()<<endl;
       cout<<"Product Type: "<<getProductType()<<endl;
        cout<<"Artist: "<<artistName<<endl;
        cout<<"Album: "<<albumName<<endl;
        cout<<"Price: "<<getProductPrice()<<endl;
        cout<<"Release Year: "<<getYearofRelease()<<endl;
        
    }
    

    
    
    
    
    
};
