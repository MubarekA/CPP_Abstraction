//
//  Movie.h
//  Product
//
//  Created by mac on 12/21/19.
//  Copyright © 2019 mac. All rights reserved.
//

#include "Product.h"

class Movie : public product {
private:
    string movieName;
    string actorName;
    string mainActressname;
    string directorName;
    string movieRate;
public:
    Movie() : product() {
        this->movieName="";
        this->actorName="";
        this->mainActressname="";
        this->directorName="";
        this->movieRate="";
    }
    Movie (string movieName,string actorName,string mainActressname,string directorName,string movieRate,string productId, string productType,double productPrice, int yearofRelease) : product(productId,productType,productPrice,yearofRelease){
        this->movieName = movieName;
        this->actorName = actorName;
        this->mainActressname = mainActressname;
        this->directorName = directorName;
        this->movieRate = movieRate;
    }

    
    
    void setMovieName(string movieName) {
        this->movieName=movieName;
    }
    string getMovieName(){
        return this->movieName;
    }
    void setActorName(string actorName) {
        this->actorName=actorName;
    }
    string getActorName(){
        return this->actorName;
    }
    void setMainActressname(string mainActressname) {
        this->mainActressname=mainActressname;
    }
    string getMainActressname(){
        return this->mainActressname;
    }
    
    void setDirectorName(string directorName) {
        this->directorName=directorName;
    }
    string getDirectorName(){
        return this->directorName;
    }
    void setMovieRate(string movieRate) {
        this->movieRate=movieRate;
    }
    string getMovieRate(){
        return this->movieRate;
    }
    
    
    
    
    
    

};
