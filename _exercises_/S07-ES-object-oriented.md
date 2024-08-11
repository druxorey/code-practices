# Programación Orientada a Objetos

1) **E01-product-classes**: Los productos que comercializa una determinada empresa son libros y CD. Cada producto viene caracterizado por un código que lo identifica de manera única, el precio base del mercado, y el IVA que se le aplica que es diferente en cada caso, el 8 % para los libros y el 12 % para los CD. Además las características propias de cada tipo de producto son para los Libros: título, autor(es), año de publicación, editorial, ISBN y para los CD: título, intérprete, año de publicación. Por otro lado, esta empresa aplica un 20 % de descuento a los libros y un 10 % a los CD. Por tanto, el precio de venta de cada producto se calculará como: precio base + %IVA – descuento. Defina las clases que sean necesarias para representar los distintos tipos de productos que acabamos de especificar.

2) **E02-hardware-tools**: Cuando se visita una ferretería, es común hallar todo tipo de materiales y herramientas. Todas las herramientas poseen un conjunto de características comunes, que son de interés no solo para el dueño del negocio sino también para los clientes como por ejemplo: el nombre, una pequeña descripción, el costo, algún código de fábrica asociado, el nombre del fabricante, etc. En algunas ferreterías, las herramientas las clasifican en tres grandes grupos, manuales, eléctricas y motoras. Dependiendo del uso futuro por parte de los clientes, dichos tipos de herramientas se clasifican a su vez en: de albañilería, de plomería, o de electricidad. Las herramientas eléctricas tienen como característica principal el voltaje con el cual trabajan, incluso existen herramientas eléctricas que no solo trabajan con la corriente proveniente del tendido eléctrico sino que pueden operar en base a la energía almacenada en baterías. Las herramientas motoras funcionan a base de un motor que posee cierta potencia, poseen además un pequeño tanque para el combustible y hay algunas que hasta necesita aceite. Con la avanzada tecnología actual, se han desarrollado herramientas que pueden trabajar a base de electricidad y a base de energía motora. Y ya se encuentran disponibles en mucha ferretería a pesar de su elevado costo.

3) **E03-teaching-team**: Una cátedra tiene como equipo docente un responsable y un conjunto de entre 1 y 4 auxiliares. Para aprobar la materia, cada alumno debe superar las 3 instancias de evaluación previstas: 1 parcial (que puede ser recuperado), 1 trabajo práctico y examen final. La cátedra lleva un registro de fecha y resultado de cada una de las evaluaciones realizadas por los alumnos. Además de estos dos datos, para los trabajos prácticos se guarda información respecto al retraso en la fecha de entrega (si lo hubiera) y para los exámenes finales en qué mesa y en qué llamados el alumno rindió el examen.

4) **E04-fm-tuner**: Se quiere definir una clase que permita controlar un sintonizador digital de emisoras FM; concretamente, lo que se desea es dotar al controlador de una interfaz que permita subir (up) o bajar (down) la frecuencia (en saltos de 0.5 MHz) y mostrar la frecuencia sintonizada en un momento dado (display). Supondremos que el rango de frecuencias a manejar oscila entre los 80 Mhz y los 108 MHz y que al inicio, el controlador sintoniza a 80 MHz. Si durante una operación de subida o bajada se sobrepasa uno de los dos límites, la frecuencia sintonizada debe pasar a ser la del extremo contrario.

5) **E05-fraction-operations**: Escriba un algoritmo principal que utilice la clase "fraccion"  para almacenar tres fracciones dadas por el usuario (F1, F2, F3) y calcule la suma de F1 + F2 + F3, la multiplicación de F1 * F3, la división de F2 entre F1 e imprima los tres resultado. La clase "fraccion" debe contenga los siguientes métodos:

	1. **fraccion(N1,N2):** Constructor que recibe valores enteros para el numerador (N1) y el denominador (N2).
	2. **sumar(b):** Sumar la fracción b a la fracción que la invoca.
	3. **multiplicar(b):** Multiplicar la fracción b a la fracción que la invoca.
	4. **dividir(b):** Dividir la fracción b a la fracción que la invoca.
	5. **comparar(b):** Retorna verdadero si la fracción que la invoca es igual a b, sino retorna falso.
	6. **simplificar():** Simplificar la fracción.
	7. **aString():** Devuelve un String con la fracción llamante expresada en la forma N1/N2.

6) **E06-product-class**: Especifique una clase con los métodos: Constructores, Métodos de consulta y modificación de los atributos, método para calcular. Tiene que representar productos con las siguientes propiedades:

	• Tienen un código que los identifica de manera única y que se asigna automáticamente en el momento de la creación.
	• Guardan la descripción y el precio sin IVA.
	• Todos los productos comparten el mismo IVA (supongamos el 12 %), que puede variar en función de las decisiones del gobierno.
	• Los productos se dan de alta en una fecha concreta (la fecha de creación) lo que nos servirá para conocer cuáles son los productos más novedosos o más recientes.

7) **E07-wallet-class**: Defina una clase Monedero que permita gestionar la cantidad de dinero que una persona dispone en un momento dado. La clase deberá tener un constructor que permitirá crear un monedero con una cantidad de dinero inicial y deberá definir un método para meter dinero en el monedero, otro para sacarlo y finalmente, otro para consultar el disponible; solo podrá conocerse la cantidad de dinero del monedero a través de este último método. Por supuesto, no se podrá sacar más dinero del que haya en un momento dado en el monedero.

8) **E08-runner-class**: Escriba una clase Corredor que contenga un atributo de tipo entero denominado energía que indica el valor de la energía como un entero en el rango [0, 100]. Al crear un corredor, se deberá indicar un valor para la energía inicial. Se debe verificar que el valor de energía no esté fuera del rango [0, 100] a través de un procedimiento llamado verificarEnergia(). Si la cantidad pasada por parámetro no es un número entero mayor o igual a cero, verificarEnergia() mostrará un mensaje al respecto y dejará la energía en 0; si la energía recargada pasa del valor 100 se deberá dejar a 100. El corredor tendrá un método recargarEnergia() a la que se le pasará por parámetro la cantidad que será sumada al atributo energía. La clase tendrá un método correr() que cada vez que se llame restará 10 puntos de energía del corredor. El método energiaAgotada() debe verificar si la energía del corredor era menor que 10 al momento de llamar a correr. Si es menor a 10, la energía quedará en 0, se mostrará un mensaje indicando que se llegó al mínimo de energía y se mostrará cuál es la energía del corredor. La clase también tendrá un método entrenar que permitirá al corredor recuperar energía. Cada vez que se llama a entrenar la energía del corredor. La clase también tendrá un método entrenar que permitirá al corredor recuperar energía. Cada vez que se llama a entrenar la energía del corredor aumentará 15 puntos, teniendo en cuenta que nunca puede pasar de 100.

9) **E09-point-class**: Defina una clase punto que tendrá dos atributos, de tipo Real x e y, que representarán las coordenadas del punto dentro del plano. Defina un método que tenga como argumento otro objeto de la clase punto y que calcule la distancia entre los dos puntos. Un punto puede estar ubicado en cualquier parte del sistema de coordenada. Puede definir otros métodos que considere necesarios.

10) **E10-salesperson-class**: Una empresa dedicada a la venta de jugos, desea registrar la información de sus vendedores, respecto a: cedula, nombre, zonaDeVenta, vtasMensuales, totalAnual y comisión. Donde vtasMensuales representa las ventas realizadas por el vendedor en cada uno de los doce meses del año, totalAnual representa la suma de las ventas en un año y comisión un porcentaje que depende del totalAnual. Además la variable nombre está asociada con una clase Nombre cuyas instancias representan el apellido, el primerNombre y el segundoNombre de cada vendedor.

	1. Definir la clase Vendedor y la clase Nombre
	2. Definir en la clase que corresponda los métodos que permitan los siguientes requerimientos:
	
		- Crear una instancia de la clase Vendedor y solicitar al usuario los datos para inicializar sus variables, excepto las variables ventasMensuales, totalAnual y comisión que se inicializan con ceros.
		- Ingresar las ventas de un determinado mes.
		- Determinar la comisión del vendedor, teniendo en cuenta que si totalAnual < Bs 50.000, la comisión es cero, si Bs. 50.000 ≤ totalAnual < Bs. 70.500, la comisión es del 15 %, si Bs. 70.500 ≤ totalAnual < Bs. 100.000, la comisión es de 20 % y si Bs. 100.000 ≤ totalAnual, la comisión es del 30 %.

11) **E11-mall-stores**: Un centro comercial desea administrar toda la información de sus locales. Cada local tiene: nombre, RIF, horario, dueño, encargado, tamaño (m2) y una lista de empleados. Hay que determinar: La cantidad de librerías del centro comercial, la cantidad de empleados, por sexo, de la farmacia, La cantidad de metros cuadrados que ocupan los locales del centro comercial. Los locales que pertenecen al centro comercial se clasifican en: 

	1. Tiendas de ropas, pudiendo ser estas tiendas para mujeres, hombres o mixtas.
	2. Locales de comida, estos pueden ser restaurantes o de comida rápida.
	3. Librerías.
	4. Una Farmacia. 

12) **E12-gambling-system**: Una empresa dedicada a las apuestas deportivas requiere de la migración de su viejo sistema de tickets físicos que se venden en kioskos a un sistema totalmente digital y automatizado, donde los clientes puedan autogestionar su registro, métodos de pago además de realizar sus apuestas, ver los resultados y sus ganancias/pérdidas.
