///////////////////////////////////////////////////////////////////////////////
//
// This file is a part of the PadallelFDTD Finite-Difference Time-Domain
// simulation library. It is released under the MIT License. You should have 
// received a copy of the MIT License along with ParallelFDTD.  If not, see
// http://www.opensource.org/licenses/mit-license.php
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// For details, see the LICENSE file
//
// (C) 2013-2014 Jukka Saarelma
// Aalto University School of Science
//
///////////////////////////////////////////////////////////////////////////////

#include "glHelpers.h"
#include "../global_includes.h"
#include <stdio.h>

void glewsafe(GLenum error, const char* message){
  char * errorStr = (char*)glewGetErrorString(error);
  if(error!=GLEW_OK) { log_msg<LOG_ERROR>(L"glHelpers: glewsafe: %s : %s") %message %errorStr;}
}

void glsafe(GLenum error, const char* message){
  char * errorStr = (char*)gluErrorString(error);
  if(error!=GL_NO_ERROR) { log_msg<LOG_ERROR>(L"glHelpers: glsafe: %s : %s") %message %errorStr;}
}
