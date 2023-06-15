## Sistema de Generación de Menús Personalizados

Este proyecto implementa un sistema de generación de menús personalizados en función de los datos del usuario. El sistema utiliza varias clases para gestionar los alimentos, los grupos de alimentos, el catálogo de alimentos y el usuario.

# Clases

* "system.cpp": Contiene la función principal "main()", que inicializa el sistema llamando al método "run()" de la clase "System".
* "FoodItem.h": Define la clase "FoodItem" para representar un elemento de comida con atributos como el nombre y las calorías. Proporciona métodos para establecer y obtener los valores de los atributos, así como un método "printItem()" para imprimir la información del alimento.
* "FoodGroup.h": Hereda de la clase "FoodItem" y representa un grupo de alimentos. Tiene un atributo adicional para almacenar el nombre del grupo y utiliza un mapa para almacenar los alimentos en diferentes grupos. Proporciona métodos para obtener la lista de los alimentos del grupo, además de que, a su vez, incluye un método "printGroup()" que imprime el nombre del grupo y muestra los alimentos que pertenecen a él.
* "FoodCatalog.h": Hereda de la clase "FoodGroup" y representa un catálogo de grupos de alimentos. Proporciona métodos para cargar y mostrar la lista de grupos de alimentos desde un archivo, así como mostrar los alimentos de otro grupo específico.
* "derivSystem.h": Define la clase "System", la cual representa el sistema de generación de menús. Tiene un objeto de la clase "User" y un objeto de la clase "Menu", así como un atributo "menuType" para almacenar el tipo de menú seleccionado. La clase proporciona métodos para imprimir el menú del usuario, generar el menú en función de los datos del usuario y mostrar la información del mismo usuario.
* "User.h": Define la clase "User", representativa de los datos del usuario, tales como el nombre, la edad, el peso, la estatura, el factor de actividad y el género. Proporciona métodos para establecer y obtener los valores de los atributos, así como un método "printUser()" encargado de solicitar al usuario que ingrese sus datos y un método "calculateBM()" encargado de calcular el metabolismo basal del usuario y poder proporcionarle la cantidad recomendada de calorías que el usuario debería de consumir al día.

En resumen, el sistema utiliza estas clases para crear un programa que genere menús personalizados para los usuarios. El usuario ingresa su información personal, como nombre, edad, peso, altura y factor de actividad. Luego, el sistema utiliza estos datos para calcular el metabolismo basal del usuario y generar un menú basado en sus necesidades calóricas y preferencias.

Además, el sistema utiliza un catálogo de grupos de alimentos y alimentos individuales para proporcionar opciones de alimentos en el menú. Los alimentos se agrupan en diferentes categorías, lo que permite una selección más variada en el menú generado.

# Tecnología utilizada

* git y github
* 100% C++
* Uso de un operador:"operator<<" (intencionado a hacer sobrecarga ddel operador de salida de streams con la finalidad de facilitar la impresión del texto).
* Uso de una excepción: el "try/catch" en la clase "User" nos permite crear un posible error e identificarlo en caso de que llegue a suceder si no se cumple con los parámetros indicados.

# Importante

* Será necesario conectar nuestro GitHub con el IDE que estamos utilizando (en caso de estar haciendo uso alguno).
* Es necesario asegurarnos de que todas las clases necesarias para el programa ya estén creadas (para evitarnos erorres innecesarios).
* El ÚNICO archivo de tipo ".cpp" será el de snakes (para ahorrarnos la creación de múltiples archivos ".exe").
* Todos los archivos de jugadores y el "MyGame" tienen que ir como #include dentro del archivo .cpp "snakes".
* Para salir o detener el juego, se tiene que escribir en la terminal/consola "E" o "e" (en referencia a "exit").
