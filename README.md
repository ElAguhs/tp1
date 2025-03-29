**.gitignore**

**¿Por qué es conveniente incluirlo?**
1. Evita archivos innecesarios en el repositorio

- Archivos temporales, cachés o dependencias que no deben ser versionadas.

2. Protege información sensible

- Credenciales, claves API o configuraciones locales que no deben compartirse.

3. Mantiene el repositorio limpio

- Facilita la colaboración evitando que archivos irrelevantes sean rastreados.

4. Optimiza el rendimiento de Git

- Al no rastrear archivos innecesarios, Git funciona más rápido.

**Casos en los que se debe agregar un .gitignore**
1. Al iniciar un nuevo proyecto

- Para evitar subir archivos innecesarios desde el principio.

2. Al usar herramientas o frameworks que generan archivos temporales

- Ejemplo: node_modules/ en Node.js o venv/ en Python.

3. Cuando se trabaja con archivos de compilación o ejecutables

- Ejemplo: *.o, *.exe, *.class, etc.

4. Si el proyecto maneja información sensible

- Claves API, credenciales (.env, secrets.json).

5. Cuando se colabora en equipo

- Evita que configuraciones locales (como .vscode/ o .idea/) se suban al repositorio.

**Pasos para configurar el archivo .gitignore**
1. Crear el archivo .gitignore

2. Agregar reglas para ignorar archivos

3. Configurar reglas específicas para tu proyecto

4. Subir el archivo .gitignore al repositorio
