
#include "fvCFD.H"
#include "volFields.H"
#include "surfaceFields.H"
#include "meshTools.H"

int main(int argc, char *argv[])
{
    #include "setRootCase.H"
    #include "createTime.H"
    #include "createMesh.H"

	// Create an output file stream (you can specify the path and name of the file) 
	OFstream outputFile("cellCoordinates.txt"); 

    Info << "Reading mesh" << endl;

    const volVectorField& C = mesh.C();

    forAll(C, cellI)
    {
        outputFile << "Cell " << cellI << ": " << C[cellI] << endl; // Write to the file
    }

	outputFile << endl; // Close file output

    return 0;
}
