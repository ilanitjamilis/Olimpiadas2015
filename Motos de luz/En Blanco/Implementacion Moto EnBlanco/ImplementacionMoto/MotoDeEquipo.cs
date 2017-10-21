using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Pune;

namespace ImplementacionMoto
{
    public class MotoDeEquipo : MotoDeLuz
    {

        public MotoDeEquipo(ColorMoto color, Tablero tablero, Teclado controles)
            : base(color, tablero, controles)
        {
        }

        /*
        bool podesMoverteArriba;
        bool podesMoverteAbajo;
        bool podesMoverteDerecha;
        bool podesMoverteIzquierda;
        ColorMoto colorEnemigo;
        int aDondeEstabaYendo = 1;
        bool aux = true;
        int diferenciaFilaArriba;
        int diferenciaFilaAbajo;
        int diferenciaColumnaDerecha;
        int diferenciaColumnaIzquierda;
        int diferenciaFilaArribaEnemigo;
        int diferenciaFilaAbajoEnemigo;
        int diferenciaColumnaDerechaEnemigo;
        int diferenciaColumnaIzquierdaEnemigo;
        bool arriba = false;
        bool abajo = false;
        bool izquierda = false;
        bool derecha = false;
        bool borde = false;
        Posicion posicionEnemigoAnterior;
        bool estaYendoArriba;
        bool estaYendoAbajo;
        bool estaYendoDerecha;
        bool estaYendoIzquierda;
        int cont = 0;
        int filaEnemigoAnterior;
        int columnaEnemigoAnterior;
        int columnasAMover;
        bool moverDerecha = false;
        bool moverIzquierda = false;
        */

        int lugaresArriba;
        int lugaresAbajo;
        int lugaresDerecha;
        int lugaresIzquierda;
        Posicion posicionArriba;
        Posicion posicionAbajo;
        Posicion posicionDerecha;
        Posicion posicionIzquierda;
        Posicion devolver;
        int lugares;


        public override Posicion QuePosicionPintas()
        {
            lugaresArriba = 0;
            lugaresAbajo = 0;
            lugaresDerecha = 0;
            lugaresIzquierda = 0;

            posicionArriba = new Posicion(PosicionActual.Fila - 1, PosicionActual.Columna);
            posicionAbajo = new Posicion(PosicionActual.Fila + 1, PosicionActual.Columna);
            posicionDerecha = new Posicion(PosicionActual.Fila, PosicionActual.Columna + 1);
            posicionIzquierda = new Posicion(PosicionActual.Fila, PosicionActual.Columna - 1);

            while (posicionArriba.Fila > 0 && TableroActual.QueColorEstaPintado(posicionArriba) == ColorMoto.Blanco)
            {
                lugaresArriba++;
                posicionArriba = new Posicion(posicionArriba.Fila - 1, posicionArriba.Columna);
            }
            if(TableroActual.QueColorEstaPintado(new Posicion (posicionArriba.Fila+1,posicionArriba.Columna+1))!=ColorMoto.Blanco&&TableroActual.QueColorEstaPintado(new Posicion (posicionArriba.Fila+1,posicionArriba.Columna-1))!=ColorMoto.Blanco)
            {
                lugaresArriba=0;
            }

            while (TableroActual.Alto > posicionAbajo.Fila && TableroActual.QueColorEstaPintado(posicionAbajo) == ColorMoto.Blanco)
            {
                lugaresAbajo++;
                posicionAbajo = new Posicion(posicionAbajo.Fila + 1, posicionAbajo.Columna);
            }
            if (TableroActual.QueColorEstaPintado(new Posicion(posicionAbajo.Fila - 1, posicionAbajo.Columna + 1)) != ColorMoto.Blanco && TableroActual.QueColorEstaPintado(new Posicion(posicionAbajo.Fila + 1, posicionAbajo.Columna - 1)) != ColorMoto.Blanco)
            {
                lugaresAbajo = 0;
            }

            while (posicionIzquierda.Columna > 0 && TableroActual.QueColorEstaPintado(posicionIzquierda) == ColorMoto.Blanco)
            {
                lugaresIzquierda++;
                posicionIzquierda = new Posicion(posicionIzquierda.Fila, posicionIzquierda.Columna - 1);
            }
            if (TableroActual.QueColorEstaPintado(new Posicion(posicionIzquierda.Fila + 1, posicionIzquierda.Columna + 1)) != ColorMoto.Blanco && TableroActual.QueColorEstaPintado(new Posicion(posicionIzquierda.Fila - 1, posicionIzquierda.Columna + 1)) != ColorMoto.Blanco)
            {
                lugaresIzquierda = 0;
            }

            while (TableroActual.Ancho > posicionDerecha.Columna && TableroActual.QueColorEstaPintado(posicionDerecha) == ColorMoto.Blanco)
            {
                lugaresDerecha++;
                posicionDerecha = new Posicion(posicionDerecha.Fila, posicionDerecha.Columna + 1);
            }
            if (TableroActual.QueColorEstaPintado(new Posicion(posicionDerecha.Fila - 1, posicionDerecha.Columna - 1)) != ColorMoto.Blanco && TableroActual.QueColorEstaPintado(new Posicion(posicionDerecha.Fila + 1, posicionDerecha.Columna - 1)) != ColorMoto.Blanco)
            {
                lugaresDerecha = 0;
            }

            posicionArriba = new Posicion(PosicionActual.Fila - 1, PosicionActual.Columna);
            posicionAbajo = new Posicion(PosicionActual.Fila + 1, PosicionActual.Columna);
            posicionDerecha = new Posicion(PosicionActual.Fila, PosicionActual.Columna + 1);
            posicionIzquierda = new Posicion(PosicionActual.Fila, PosicionActual.Columna - 1);

            devolver = posicionArriba;
            lugares = lugaresArriba;

            if (lugaresAbajo > lugares)
            {
                devolver = posicionAbajo;
                lugares = lugaresAbajo;
            }
            if (lugaresDerecha > lugares)
            {
                devolver = posicionDerecha;
                lugares = lugaresDerecha;
            }
            if (lugaresIzquierda > lugares)
            {
                devolver = posicionIzquierda;
                lugares = lugaresIzquierda;
            }

            return devolver;


            /*
            if (lugaresArriba > lugaresAbajo && lugaresArriba > lugaresDerecha && lugaresArriba > lugaresIzquierda)
            {
                return posicionArriba;
            }
            else if (lugaresAbajo > lugaresArriba && lugaresAbajo > lugaresDerecha && lugaresAbajo > lugaresIzquierda)
            {
                return posicionAbajo;
            }
            else if (lugaresDerecha > lugaresArriba && lugaresDerecha > lugaresAbajo && lugaresDerecha > lugaresIzquierda)
            {
                return posicionDerecha;
            }
            else if (lugaresIzquierda > lugaresArriba && lugaresIzquierda > lugaresAbajo && lugaresIzquierda > lugaresDerecha)
            {
                return posicionIzquierda;
            }
            else
            {
                return null;
            }
            */

            /*
            podesMoverteArriba = false;
            podesMoverteAbajo = false;
            podesMoverteDerecha = false;
            podesMoverteIzquierda = false;
            estaYendoArriba = false;
            estaYendoAbajo = false;
            estaYendoDerecha = false;
            estaYendoIzquierda = false;

            if (this.Color == ColorMoto.Azul)
            {
                colorEnemigo = ColorMoto.Rojo;
            }
            else
            {
                colorEnemigo = ColorMoto.Azul;
            }

            Posicion posicionEnemiga = TableroActual.EnQuePosicionEsta(colorEnemigo);

            Posicion posicionArriba = new Posicion(PosicionActual.Fila - 1, PosicionActual.Columna);
            if (PosicionActual.Fila > 1 && TableroActual.QueColorEstaPintado(posicionArriba) == ColorMoto.Blanco)
            {
                podesMoverteArriba = true;
            }

            Posicion posicionAbajo = new Posicion(PosicionActual.Fila + 1, PosicionActual.Columna);
            if (PosicionActual.Fila < TableroActual.Alto - 1 && TableroActual.QueColorEstaPintado(posicionAbajo) == ColorMoto.Blanco)
            {
                podesMoverteAbajo = true;
            }

            Posicion posicionDerecha = new Posicion(PosicionActual.Fila, PosicionActual.Columna + 1);
            if (PosicionActual.Columna < TableroActual.Ancho - 1 && TableroActual.QueColorEstaPintado(posicionDerecha) == ColorMoto.Blanco)
            {
                podesMoverteDerecha = true;
            }

            Posicion posicionIzquierda = new Posicion(PosicionActual.Fila, PosicionActual.Columna - 1);
            if (PosicionActual.Columna > 1 && TableroActual.QueColorEstaPintado(posicionIzquierda) == ColorMoto.Blanco)
            {
                podesMoverteIzquierda = true;
            }

            
            if(posicionEnemiga.Fila < ((TableroActual.Alto - 1) / 2) && PosicionActual.Fila > ((TableroActual.Alto - 1) / 2) && (TableroActual.Alto-1) - PosicionActual.Fila > (TableroActual.Alto-1)/2 && podesMoverteDerecha)
            {
                aDondeEstabaYendo = 3;
                return posicionDerecha;
            }
            else if(posicionEnemiga.Fila < ((TableroActual.Alto - 1) / 2) && PosicionActual.Fila > ((TableroActual.Alto - 1) / 2) && (TableroActual.Alto - 1) - PosicionActual.Fila > (TableroActual.Alto - 1) / 2 && podesMoverteIzquierda)
            {
                aDondeEstabaYendo = 2;
                return posicionIzquierda;
            }
            

            if (aux)
            {
                aux = false;
                if (TableroActual.Ancho / 2 > PosicionActual.Columna)
                {
                    diferenciaColumnaIzquierda = PosicionActual.Columna;
                    diferenciaColumnaDerecha = 500;
                }
                else
                {
                    diferenciaColumnaIzquierda = 500;
                    diferenciaColumnaDerecha = TableroActual.Ancho - PosicionActual.Columna;
                }
                if (TableroActual.Alto / 2 > PosicionActual.Fila)
                {
                    diferenciaFilaAbajo = 500;
                    diferenciaFilaArriba = PosicionActual.Fila;
                }
                else
                {
                    diferenciaFilaArriba = 500;
                    diferenciaFilaAbajo = TableroActual.Alto - PosicionActual.Fila;
                }

                if (diferenciaColumnaDerecha < diferenciaColumnaIzquierda && diferenciaColumnaDerecha < diferenciaFilaArriba && diferenciaColumnaDerecha < diferenciaFilaAbajo)
                {
                    derecha = true;
                }
                else if (diferenciaColumnaIzquierda < diferenciaColumnaDerecha && diferenciaColumnaIzquierda < diferenciaFilaArriba && diferenciaColumnaIzquierda < diferenciaFilaAbajo)
                {
                    izquierda = true;
                }
                else if (diferenciaFilaArriba < diferenciaColumnaDerecha && diferenciaFilaArriba < diferenciaColumnaIzquierda && diferenciaFilaArriba < diferenciaFilaAbajo)
                {
                    arriba = true;
                }
                else if (diferenciaFilaAbajo < diferenciaColumnaDerecha && diferenciaFilaAbajo < diferenciaColumnaIzquierda && diferenciaFilaAbajo < diferenciaFilaArriba)
                {
                    abajo = true;
                }

                if (derecha)
                {
                    aDondeEstabaYendo = 3;
                    return posicionDerecha;
                }
                else if (izquierda)
                {
                    aDondeEstabaYendo = 2;
                    return posicionIzquierda;
                }
                else if (arriba)
                {
                    aDondeEstabaYendo = 1;
                    return posicionArriba;
                }
                else
                {
                    aDondeEstabaYendo = 4;
                    return posicionAbajo;
                }
            }

            if(borde==false)
            {
                if (aDondeEstabaYendo == 1 && podesMoverteArriba)
                {
                    aDondeEstabaYendo = 1;
                    return posicionArriba;
                }
                else if (aDondeEstabaYendo == 2 && podesMoverteIzquierda)
                {
                    aDondeEstabaYendo = 2;
                    return posicionIzquierda;
                }
                else if (aDondeEstabaYendo == 4 && podesMoverteAbajo)
                {
                    aDondeEstabaYendo = 4;
                    return posicionAbajo;
                }
                else if (aDondeEstabaYendo == 3 && podesMoverteDerecha)
                {
                    aDondeEstabaYendo = 3;
                    return posicionDerecha;
                }
                else
                {
                    borde = true;
                    cont++;
                }
                posicionEnemigoAnterior = posicionEnemiga;
            }
            if (borde && cont==1)
            {
                borde = false;

                if (derecha || izquierda)
                {
                    if (TableroActual.Alto / 2 > PosicionActual.Fila)
                    {
                        aDondeEstabaYendo = 1;
                        return posicionArriba;
                    }
                    else
                    {
                        aDondeEstabaYendo = 4;
                        return posicionAbajo;
                    }
                }
                else
                {
                    if (TableroActual.Ancho / 2 > PosicionActual.Columna)
                    {
                        aDondeEstabaYendo = 2;
                        return posicionIzquierda;
                    }
                    else
                    {
                        aDondeEstabaYendo = 3;
                        return posicionDerecha;
                    }
                }
            }

            if (cont>1)
            {
                if (cont == 2)
                {
                    if (PosicionActual.Columna > columnaEnemigoAnterior)
                    {
                        moverIzquierda = true;
                        columnasAMover = PosicionActual.Columna - columnasAMover + 1;
                    }
                    else
                    {
                        moverDerecha = true;
                        columnasAMover = columnaEnemigoAnterior - PosicionActual.Columna - 1;
                    }
                    cont++;
                }

                if (moverIzquierda && columnasAMover > 0)
                {
                    columnasAMover--;
                    return posicionIzquierda;
                }
                else
                {
                    if (moverDerecha && columnasAMover > 0)
                    {
                        columnasAMover--;
                        return posicionDerecha;
                    }
                }
            }


                
                if (posicionEnemigoAnterior.Fila - 1 == posicionEnemiga.Fila)
                {
                    estaYendoArriba = true;
                }
                else if (posicionEnemigoAnterior.Fila + 1 == posicionEnemiga.Fila)
                {
                    estaYendoAbajo = true;
                }
                else if (posicionEnemigoAnterior.Columna - 1 == posicionEnemiga.Columna)
                {
                    estaYendoIzquierda = true;
                }
                else
                {
                    estaYendoDerecha = true;
                }

                if (estaYendoArriba && podesMoverteArriba)
                {
                    aDondeEstabaYendo=1;
                    return posicionArriba;
                }
                else if (estaYendoAbajo && podesMoverteAbajo)
                {
                    aDondeEstabaYendo=4;
                    return posicionAbajo;
                }
                else if (estaYendoIzquierda && podesMoverteIzquierda)
                {
                    aDondeEstabaYendo=2;
                    return posicionIzquierda;
                }
                else if(estaYendoDerecha && podesMoverteDerecha)
                {
                    aDondeEstabaYendo=3;
                    return posicionDerecha;
                }
                else
                {
                    borde=false;
                    return posicionArriba;
                }
                

            filaEnemigoAnterior = posicionEnemiga.Fila;
            columnaEnemigoAnterior = posicionEnemiga.Columna;

            return null;
            


                            
                            if (aDondeEstabaYendo == 1 && podesMoverteIzquierda)
                            {
                                aDondeEstabaYendo = 2;
                                return posicionIzquierda;
                            }
                            else
                            {
                                if (aDondeEstabaYendo == 1 && podesMoverteDerecha)
                                {
                                    aDondeEstabaYendo = 3;
                                    return posicionDerecha;
                                }
                                else
                                {
                                    if (aDondeEstabaYendo == 2 && podesMoverteAbajo)
                                    {
                                        aDondeEstabaYendo = 4;
                                        return posicionAbajo;
                                    }
                                    else
                                    {
                                        if (aDondeEstabaYendo == 2 && podesMoverteArriba)
                                        {
                                            aDondeEstabaYendo = 1;
                                            return posicionArriba;
                                        }
                                        else
                                        {
                                            if (aDondeEstabaYendo == 4 && podesMoverteDerecha)
                                            {
                                                aDondeEstabaYendo = 3;
                                                return posicionDerecha;
                                            }
                                            else
                                            {
                                                if (aDondeEstabaYendo == 4 && podesMoverteIzquierda)
                                                {
                                                    aDondeEstabaYendo = 2;
                                                    return posicionIzquierda;
                                                }
                                                else
                                                {
                                                    if (aDondeEstabaYendo == 3 && podesMoverteArriba)
                                                    {
                                                        aDondeEstabaYendo = 1;
                                                        return posicionArriba;
                                                    }
                                                    else
                                                    {
                                                        aDondeEstabaYendo = 4;
                                                        return posicionAbajo;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            */


        }
    }
}
            

