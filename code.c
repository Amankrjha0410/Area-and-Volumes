#include <stdio.h>
int main()
{
    int opt;
    float side,length,breadth,radius,base,height,a,b,slant,area,volume;
    printf("\n\n\nEnter 1 for Area of Square\nEnter 2 for Area of Rectangle\nEnter 3 for Area of Circle\nEnter 4 for Area of Equilateral Triangle\nEnter 5 for Area of Right Angled Triangle\nEnter 6 for Area of Trapezium\nEnter 7 for Area of Parellelogram\nEnter 8 for Curved Surface Area of Cube\nEnter 9 for Total Surface Area of Cube\nEnter 10 for Curved Surface Area of Cuboid\nEnter 11 for Total Surface Area of Cuboid\nEnter 12 for Area of Sphere\nEnter 13 for Curved Surface Area of Cone\nEnter 14 for Total Surface Area of Cone\nEnter 15 for Curved Surface Area of Cylinder\nEnter 16 for Total Surface Area of Cylinder\nEnter 17 for Curved Surface Area of Hemisphere\nEnter 18 for Total Surface Area of Hemisphere\nEnter 19 for Volume of Cube\nEnter 20 for Volume of Cuboid\nEnter 21 for Volume of Cone\nEnter 22 for Volume of Cylinder\nEnter 23 for Volume of Sphere\nEnter 24 for Volume of Hemisphere\n");
    printf("\n\nNumber=");
    scanf("%d",&opt);
    switch (opt)
    {
        case 1:
        printf("Enter side of Square: \n");
        scanf("%f",&side);
        area= side*side ;
        printf("The area of square is %0.2f sq. units",area);
        break ;
        
        case 2:
        printf("Enter length and breadth of Rectangle: \n");
        scanf("%f %f",&length,&breadth);
        area= length*breadth ;
        printf("The area of Rectangle is %0.2f sq. units",area);
        break ;
        
        
        case 3:
        printf("Enter radius of Circle: \n");
        scanf("%f",&radius);
        area= (3.14)*radius*radius ;
        printf("The area of Circle is %0.2f sq. units",area);
        break ;
        
        case 4:
        printf("Enter side of Equilateral Triangle: \n");
        scanf("%f",&side);
        area= 0.433*side*side ;
        printf("The area of Equilateral Triangle is %0.2f sq. units",area);
        break ;
        
        case 5:
        printf("Enter base and height of Right Angled Triangle: \n");
        scanf("%f %f",&base,&height);
        area= (0.5)*(base)*(height) ;
        printf("The area of Right Angled Triangle is %0.2f sq. units",area);
        break ;
        
        case 6:
        printf("Enter lenth of a,b and height of Trapezium: \n");
        scanf("%f %f %f",&a,&b,&height);
        area= ((0.5)*(a+b)*height) ;
        printf("The area of Trapezium is %0.2f sq. units",area);
        break ;
        
        case 7:
        printf("Enter base and height of Parallelogram: \n");
        scanf("%f %f",&base,&height);
        area= base*height ;
        printf("The area of Parallelogram is %0.2f sq. units",area);
        break ;
        
        case 8:
        printf("Enter side of Cube: \n");
        scanf("%f",&side);
        area= 4*side*side ;
        printf("The curved surface area of Cube is %0.2f sq. units",area);
        break ;
        
        case 9:
        printf("Enter side of Cube: \n");
        scanf("%f",&side);
        area= 6*side*side ;
        printf("The total surface area of Cube is %0.2f sq. units",area);
        break ;
        
        case 10:
        printf("Enter length,breadth and height of Cuboid: \n");
        scanf("%f %f %f",&length,&breadth,&height);
        area= 2*height*(length+breadth) ;
        printf("The curved surface area of Cuboid is %0.2f sq. units",area);
        break ;
        
        case 11:
        printf("Enter length,breadth and height of Cuboid: \n");
        scanf("%f %f %f",&length,&breadth,&height);
        area= 2*((length*breadth)+(breadth*height)+(height*length)) ;
        printf("The total surface area of Cuboid is %0.2f sq. units",area);
        break ;
        
        case 12:
        printf("Enter radius of Sphere: \n");
        scanf("%f",&radius);
        area= 4*3.14*radius*radius ;
        printf("The area of Sphere is %0.2f sq. units",area);
        break ;
        
        case 13:
        printf("Enter radius and slant height of Cone: \n");
        scanf("%f %f",&radius,&slant);
        area= 3.14*radius*slant ;
        printf("The curved surface area of Cone is %0.2f sq. units",area);
        break ;
        
        case 14:
        printf("Enter radius and slant height of Cone: \n");
        scanf("%f %f",&radius,&slant);
        area= 3.14*radius*(radius+slant) ;
        printf("The total surface area of Cone is %0.2f sq. units",area);
        break ;
        
        case 15:
        printf("Enter radius and height of Cylinder: \n");
        scanf("%f %f",&radius,&height);
        area= 6.28*radius*height ;
        printf("The curved surface area of Cylinder is %0.2f sq. units",area);
        break ;
        
        case 16:
        printf("Enter radius and height of Cylinder: \n");
        scanf("%f %f",&radius,&height);
        area= 6.28*radius*(radius+height) ;
        printf("The total surface area of Cylinder is %0.2f sq. units",area);
        break ;
        
        case 17:
        printf("Enter radius of Hemisphere: \n");
        scanf("%f",&radius);
        area= 2*3.14*radius*radius ;
        printf("The curved surface area of Hemisphere is %0.2f sq. units",area);
        break ;

        case 18:
        printf("Enter radius of Hemisphere: \n");
        scanf("%f",&radius);
        area= 3*3.14*radius*radius ;
        printf("The total surface area of Hemisphere is %0.2f sq. units",area);
        break ;

        case 19:
        printf("Enter side of Cube: \n");
        scanf("%f",&side);
        volume= side*side*side ;
        printf("The Volume of Cube is %0.2f cubic units",volume);
        break ;

        case 20:
        printf("Enter length,breadth and height of Cuboid: \n");
        scanf("%f %f %f",&length,&breadth,&height);
        volume= length*breadth*height ;
        printf("The Volume of Cuboid is %0.2f cubic units",volume);
        break ;

        case 21:
        printf("Enter radius and height of Cone: \n");
        scanf("%f %f",&radius,&height);
        volume= (0.33)*(3.14)*radius*radius*height ;
        printf("The volume of Cone is %0.2f cubic units",volume);
        break ;
        
        case 22:
        printf("Enter radius and height of Cylinder: \n");
        scanf("%f %f",&radius,&height);
        volume= (3.14)*radius*radius*height ;
        printf("The volume of Cylinder is %0.2f cubic units",volume);
        break ;

        case 23:
        printf("Enter radius and height of Sphere: \n");
        scanf("%f",&radius);
        volume= (1.33)*radius*radius*radius ;
        printf("The volume of Sphere is %0.2f cubic units",volume);
        break ;

        case 24:
        printf("Enter radius and height of Hemisphere: \n");
        scanf("%f",&radius);
        volume= (0.66)*radius*radius*radius ;
        printf("The volume of Hemisphere is %0.2f cubic units",volume);
        break ;

        default:
        printf("INVALID INPUT. PLEASE TRY AGAIN");
        break ;


    }
    return 0;
}