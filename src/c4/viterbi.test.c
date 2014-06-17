/****************************************************************\
*                                                                *
*  C4 dynamic programming library - the Viterbi implementation   *
*                                                                *
*  Guy St.C. Slater..   mailto:guy@ebi.ac.uk                     *
*  Copyright (C) 2000-2008.  All Rights Reserved.                *
*                                                                *
*  This source code is distributed under the terms of the        *
*  GNU General Public License, version 3. See the file COPYING   *
*  or http://www.gnu.org/licenses/gpl.txt for details            *
*                                                                *
*  If you use this code, please keep this notice intact.         *
*                                                                *
\****************************************************************/

#include <glib.h>

#include "viterbi.h"

int Argument_main(Argument *arg){
    g_message("Check [%s]", Viterbi_DP_Func_ARGS_STR);
    g_warning("Test [%s] does nothing", __FILE__);
    return 0;
    }

