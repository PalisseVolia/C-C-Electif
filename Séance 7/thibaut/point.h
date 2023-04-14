class Point
{
    private : 
        float x ;
        float y ;

    public :

    /* Constructeurs */

        Point(float, float);

    /* Getter */
        float getX() ;
        float getY() ;

    /* Méthodes */
        void deplace (float, float) ;
        void affiche_pos () ;
};