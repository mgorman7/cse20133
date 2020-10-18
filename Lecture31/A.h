#ifndef A_H
#define A_H

#include<iostream> 
  
template<class T, class U> 
class A  { 

	private:
		T x; 
		U y; 

	public: 
		/* Constructor */
		A(T inX, U inY) : x(inX), y(inY) {}
		
		/* Destructor */
		~A(){
			// No pointers, so leave destructor empty
		}
		
		/* Copy constructor */
		A(const A<T, U>& copy) : x(copy.x), y(copy.y) { }
		
		/* Assignment Operator */
		A<T,U>& operator=(const A<T,U>& assign) {
			
			if(this != &assign){
				this.x = assign.x;
				this.y = assign.y;
			}
			return *this;
		}

		
		T getX() const{
			return x;
		}
		
		U getY() const{
			return y;
		}
		
		void setX(T inX){
			x = inX;
		}
		
		void setY(U inY){
			y = inY;
		}
		
		bool operator==(const A& rhs) const{
			if(this != &rhs){
				if(x == rhs.x && y == rhs.y)
					return true;
				return false;
			}
			return true;
		}
		
		friend std::ostream& operator<<(std::ostream& output, const A& in){
			output << in.x << " " << in.y;
			return output;
		}
	
}; 

#endif
