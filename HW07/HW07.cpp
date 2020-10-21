#include "Planet.h"


int main()
{
   //  Much of the information given in the following table is
   //  relative to the information concerning the Earth. E.g.,
   //  Pluto is 39.507 times further from the sun than the Earth.
   //  The data concerning the number of moons may be old.

   std::vector< Planet > thePlanets;
   
   std::ifstream ifs ("PlanetData.txt", std::ifstream::in);
   
   while( ifs.good() ){
       
       std::string    planet_name ;
       double  mean_distance_from_sun ;
       double  circulation_time_around_sun ;
       double  rotation_time_around_own_axis ;
       long    equatorial_radius_in_kilometers ;
       double  mass_compared_to_earth ;
       int     number_of_moons ;
       
       ifs >> planet_name >> mean_distance_from_sun >> circulation_time_around_sun >> rotation_time_around_own_axis;
       ifs >> equatorial_radius_in_kilometers >> mass_compared_to_earth >> number_of_moons;
       
       Planet tempPlanet(planet_name, mean_distance_from_sun, circulation_time_around_sun, rotation_time_around_own_axis, 
        equatorial_radius_in_kilometers, mass_compared_to_earth, number_of_moons );
        
        thePlanets.push_back( tempPlanet );
       
   }

   std::string     planet_name_from_user;
   
   while( planet_name_from_user != "End" ){
       
       std::cout << "---------------------------------------------------------------------\n";
       
       std::cout << "\n This program can give you information about the"
            << "\n planets in our solar system. Give a planet name, or End to terminate: ";
    
       std::cin  >>  planet_name_from_user ;
       
       if( planet_name_from_user != "End" ){
   
           long unsigned int iter = 0; 
           
            while( iter < numPlanets && thePlanets.at(iter).get_planet_name() != planet_name_from_user )
            {
                iter++  ;  //  Make the pointer point to the next planet.
            }
        
           if ( iter < numPlanets && thePlanets.at(iter).get_planet_name() == planet_name_from_user )
           {
              std::cout << thePlanets.at(iter) << std::endl;
           }
           else
           {
              std::cout << "\n Sorry, could not find information on "
                   << planet_name_from_user  <<  ".\n" ;
           }
       
       }
       
   }
}
