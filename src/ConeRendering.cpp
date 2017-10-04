#include <vtkConeSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkCamera.h>
#include <vtkProperty.h>
#include <vtkActor.h>
#include <vtkRenderer.h>

//
// Render a yellow cone and moving using the mouse
// 

int main (int argc, char *argv[])
{
  // polygonal model of a cone
  vtkSmartPointer<vtkConeSource> cone = vtkSmartPointer<vtkConeSource>::New();
  cone->SetResolution(50);
  cone->SetHeight(4.0);
  cone->SetRadius(1.0);

  // put the geometry of cone inside the pipeline
  vtkSmartPointer<vtkPolyDataMapper> cone_mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
  cone_mapper->SetInputConnection(cone->GetOutputPort());

  // actor handles properties, color, textures, and others
  vtkSmartPointer<vtkActor> cone_actor = vtkSmartPointer<vtkActor>::New();
  cone_actor->Print(cout);  //print on console information about cone
  cone_actor->GetProperty()->SetDiffuseColor(0.85, 0.75, 0.1);  //yellow
  cone_actor->SetMapper(cone_mapper);

  // rendered generates the image to be displayed on some place (window/texture)
  vtkSmartPointer<vtkRenderer> rendered = vtkSmartPointer<vtkRenderer>::New();
  rendered->SetBackground(0.2, 0.2, 0.2);
  rendered->AddActor(cone_actor);
  rendered->ResetCamera();  //to be visible to all actors inside scene

  // render window is the GUI
  vtkSmartPointer<vtkRenderWindow> render_window = vtkSmartPointer<vtkRenderWindow>::New();
  render_window->AddRenderer(rendered);
  render_window->SetSize(800, 600);   // viewport' size

  // handling the mouse movements
  vtkSmartPointer<vtkRenderWindowInteractor> render_window_interactor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
  render_window_interactor->SetRenderWindow(render_window);
  
  // to start the loop and to render 
  render_window_interactor->Start();
  
  return EXIT_SUCCESS;
}