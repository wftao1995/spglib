/* Copyright (C) 2014 Atsushi Togo */
/* All rights reserved. */

/* This file is part of spglib. */

/* Redistribution and use in source and binary forms, with or without */
/* modification, are permitted provided that the following conditions */
/* are met: */

/* * Redistributions of source code must retain the above copyright */
/*   notice, this list of conditions and the following disclaimer. */

/* * Redistributions in binary form must reproduce the above copyright */
/*   notice, this list of conditions and the following disclaimer in */
/*   the documentation and/or other materials provided with the */
/*   distribution. */

/* * Neither the name of the phonopy project nor the names of its */
/*   contributors may be used to endorse or promote products derived */
/*   from this software without specific prior written permission. */

/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
/* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
/* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS */
/* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE */
/* COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, */
/* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, */
/* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; */
/* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER */
/* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT */
/* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN */
/* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE */
/* POSSIBILITY OF SUCH DAMAGE. */

#ifndef __tetrahedron_method_H__
#define __tetrahedron_method_H__

#ifndef THMCONST
#define THMCONST
#endif

void thm_get_relative_grid_address(int relative_grid_address[24][4][3],
				   THMCONST double rec_lattice[3][3]);
void thm_get_all_relative_grid_address(int relative_grid_address[4][24][4][3]);
double thm_get_integration_weight(const double omega,
				  THMCONST double tetrahedra_omegas[24][4],
				  const char function);
void
thm_get_integration_weight_at_omegas(double *integration_weights,
				     const int num_omegas,
				     const double *omegas,
				     THMCONST double tetrahedra_omegas[24][4],
				     const char function);
void thm_get_neighboring_grid_points(int neighboring_grid_points[],
				     const int grid_point,
				     THMCONST int relative_grid_address[][3],
				     const int num_relative_grid_address,
				     const int mesh[3],
				     THMCONST int bz_grid_address[][3],
				     const int bz_map[]);

#endif
