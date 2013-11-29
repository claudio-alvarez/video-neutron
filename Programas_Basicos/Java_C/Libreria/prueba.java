class prueba
{
        private native void sumar(int x);
        public static void main(String[] args)
        {	prueba Nprueba = new prueba();
                Nprueba.sumar(1);
                Nprueba.sumar(1);
                }
        static{
                System.loadLibrary("prueba");
        }
}
