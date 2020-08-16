//
//  main.cpp
//  Product
// Mubarek Abdela
//  Created by mac on 12/21/19.
//  Copyright © 2019 mac. All rights reserved.
//

#include <iostream>
#include "Movie.h"
#include "Music.h"

using namespace std;
int main() {
    Movie product1 = Movie();
    product1.setProductId("1");
    product1.setProductType("Movie");
    product1.setMovieName("Iron Man 2");
    product1.setProductPrice(9.95);
    product1.setYearofRelease(2008);
    product1.setDirectorName("Jon Favreu");
    product1.setActorName("Robert Downey Jr.");
    product1.setMainActressname("Gywenth Paltrow");
    product1.setMovieRate("PG-13");
    cout<<"> run Product Program"<<endl;
    cout << "\nProduct ID: " << product1.getProductId();
 
     cout << "\nProduct Type: " << product1.getProductType();
    
    cout << "\nName: " << product1.getMovieName();
    
     cout << "\nPrice: " << product1.getProductPrice();
    
     cout << "\nRelease Year: " << product1.getYearofRelease();
    
     cout << "\nDirector Name: " << product1.getDirectorName();
    
    cout << "\nActor Name: " << product1.getActorName();

     cout << "\nActress name: " << product1.getMainActressname();
    
     cout << "\nRate: " << product1.getMovieRate()<<endl;
    
       Music product2= Music("Creed", "Full Circle", "2", "Music", 8.95, 2008);
       product2.display();
    
    
    return 0;
}
