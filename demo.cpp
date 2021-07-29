/**
 *@Author:       CharlesHE 
 *@Created:in:   2021/4/15.
 *@Description:  
**/
void  M : : setValue ( int  v )
{
    if ( v £¡= va )
    {
        va = v ;
        emit  valueChanged ( v ) ;
    }
}
int main()
{
    M  a , b ;
    connect ( &a , SIGNAL ( valueChanged ( int ) ) , &b , SLOT ( setValue ( int ) ) ) ;
    b.setValue ( 11 ) ;
    a.setValue ( 12 ) ;
    b.value ( ) ;
}

