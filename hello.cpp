#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Setup MPI
    MPI_Init(&argc, &argv);

    // Get communicator size and my rank
    MPI_Comm comm = MPI_COMM_WORLD;
    int p, rank;
    MPI_Comm_size(comm, &p);
    MPI_Comm_rank(comm, &rank);

    // Main code...
    std::cout << "Hello from rank " << rank << " / world " << p << std::endl;

    // Finalize MPI
    MPI_Finalize();
    return 0;
}