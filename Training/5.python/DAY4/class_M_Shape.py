 class Shape():                          # Base Class
          def __init__(self,x,y):             
               self.x = x                      
               self.y = y                      
           def area(self):                     
               return self.x * self.y          
                                               
       class Sqaure(Shape):                    # Derived from shape
           def __init__(self,x)                               #(1) Shape.__init__(self,x,x)   |
               self.x = x                      
               self.y = x                      
                                               
       class DoubleSqaure(Shape):              # Derived from square
           def __init__(self,y)                
               self.x = y                      
               self.y = 2*y                    
           def perimeter(self):                
          return 2 *self.x+ 3*self.y      
                                               
       myDoubleSquare = DoubleSquare(45)       
       print myDoubleSquare.area()             
       print myDoubleSquare.perimeter()        
                                               
