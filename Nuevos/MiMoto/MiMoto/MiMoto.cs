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

        bool podesMoverteArriba;
        bool podesMoverteAbajo;
        bool podesMoverteDerecha;
        bool podesMoverteIzquierda;
        ColorMoto colorEnemigo;
        int aDondeEstabaYendo = 1;


        public override Posicion QuePosicionPintas()
        {
            podesMoverteArriba = false;
            podesMoverteAbajo = false;
            podesMoverteDerecha = false;
            podesMoverteIzquierda = false;

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

            /*
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
            */

            if (aDondeEstabaYendo == 1 && podesMoverteArriba)
            {
                aDondeEstabaYendo = 1;
                return posicionArriba;
            }
            else
            {
                if (aDondeEstabaYendo == 2 && podesMoverteIzquierda)
                {
                    aDondeEstabaYendo = 2;
                    return posicionIzquierda;
                }
                else
                {
                    if (aDondeEstabaYendo == 4 && podesMoverteAbajo)
                    {
                        aDondeEstabaYendo = 4;
                        return posicionAbajo;
                    }
                    else
                    {
                        if (aDondeEstabaYendo == 3 && podesMoverteDerecha)
                        {
                            aDondeEstabaYendo = 3;
                            return posicionDerecha;
                        }
                        else
                        {



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
                        }
                    }
                }
            }





        }
    }
}