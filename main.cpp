#include <GLFW/glfw3.h>
#include <cstddef>
int main(void)
{
  GLFWwindow* window;

  //Initialize the library
  if(!glfwInit())
    return -1;

  //Create a windowed mode window and its OpenGL context
  window = glfwCreateWindow(640,480,"Hello World",NULL, NULL);
  if(!window)
  {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  while(!glfwWindowShouldClose(window))
  {
     /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
  }
  glfwTerminate();
  return 0;
}
