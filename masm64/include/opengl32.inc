IFNDEF OPENGL32_INC
OPENGL32_INC equ <1>

PROTO64 external,GlmfBeginGlsBlock, :QWORD
PROTO64 external,GlmfCloseMetaFile, :QWORD
PROTO64 external,GlmfEndGlsBlock, :QWORD
PROTO64 external,GlmfEndPlayback, :QWORD
PROTO64 external,GlmfInitPlayback, :QWORD,:QWORD,:QWORD
PROTO64 external,GlmfPlayGlsRecord, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glAccum, :QWORD,:QWORD
PROTO64 external,glAlphaFunc, :QWORD,:QWORD
PROTO64 external,glAreTexturesResident, :QWORD,:QWORD,:QWORD
PROTO64 external,glArrayElement, :QWORD
PROTO64 external,glBegin, :QWORD
PROTO64 external,glBindTexture, :QWORD,:QWORD
PROTO64 external,glBitmap, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glBlendFunc, :QWORD,:QWORD
PROTO64 external,glCallList, :QWORD
PROTO64 external,glCallLists, :QWORD,:QWORD,:QWORD
PROTO64 external,glClear, :QWORD
PROTO64 external,glClearAccum, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glClearColor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glClearDepth, :QWORD,:QWORD
PROTO64 external,glClearIndex, :QWORD
PROTO64 external,glClearStencil, :QWORD
PROTO64 external,glClipPlane, :QWORD,:QWORD
PROTO64 external,glColor3b, :QWORD,:QWORD,:QWORD
PROTO64 external,glColor3bv, :QWORD
PROTO64 external,glColor3d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor3dv, :QWORD
PROTO64 external,glColor3f, :QWORD,:QWORD,:QWORD
PROTO64 external,glColor3fv, :QWORD
PROTO64 external,glColor3i, :QWORD,:QWORD,:QWORD
PROTO64 external,glColor3iv, :QWORD
PROTO64 external,glColor3s, :QWORD,:QWORD,:QWORD
PROTO64 external,glColor3sv, :QWORD
PROTO64 external,glColor3ub, :QWORD,:QWORD,:QWORD
PROTO64 external,glColor3ubv, :QWORD
PROTO64 external,glColor3ui, :QWORD,:QWORD,:QWORD
PROTO64 external,glColor3uiv, :QWORD
PROTO64 external,glColor3us, :QWORD,:QWORD,:QWORD
PROTO64 external,glColor3usv, :QWORD
PROTO64 external,glColor4b, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4bv, :QWORD
PROTO64 external,glColor4d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4dv, :QWORD
PROTO64 external,glColor4f, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4fv, :QWORD
PROTO64 external,glColor4i, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4iv, :QWORD
PROTO64 external,glColor4s, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4sv, :QWORD
PROTO64 external,glColor4ub, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4ubv, :QWORD
PROTO64 external,glColor4ui, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4uiv, :QWORD
PROTO64 external,glColor4us, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColor4usv, :QWORD
PROTO64 external,glColorMask, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glColorMaterial, :QWORD,:QWORD
PROTO64 external,glColorPointer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glCopyPixels, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glCopyTexImage1D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glCopyTexImage2D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glCopyTexSubImage1D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glCopyTexSubImage2D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glCullFace, :QWORD
PROTO64 external,glDebugEntry, :QWORD,:QWORD
PROTO64 external,glDeleteLists, :QWORD,:QWORD
PROTO64 external,glDeleteTextures, :QWORD,:QWORD
PROTO64 external,glDepthFunc, :QWORD
PROTO64 external,glDepthMask, :QWORD
PROTO64 external,glDepthRange, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glDisable, :QWORD
PROTO64 external,glDisableClientState, :QWORD
PROTO64 external,glDrawArrays, :QWORD,:QWORD,:QWORD
PROTO64 external,glDrawBuffer, :QWORD
PROTO64 external,glDrawElements, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glDrawPixels, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glEdgeFlag, :QWORD
PROTO64 external,glEdgeFlagPointer, :QWORD,:QWORD
PROTO64 external,glEdgeFlagv, :QWORD
PROTO64 external,glEnable, :QWORD
PROTO64 external,glEnableClientState, :QWORD
PROTO64 external,glEnd, 
PROTO64 external,glEndList, 
PROTO64 external,glEvalCoord1d, :QWORD,:QWORD
PROTO64 external,glEvalCoord1dv, :QWORD
PROTO64 external,glEvalCoord1f, :QWORD
PROTO64 external,glEvalCoord1fv, :QWORD
PROTO64 external,glEvalCoord2d, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glEvalCoord2dv, :QWORD
PROTO64 external,glEvalCoord2f, :QWORD,:QWORD
PROTO64 external,glEvalCoord2fv, :QWORD
PROTO64 external,glEvalMesh1, :QWORD,:QWORD,:QWORD
PROTO64 external,glEvalMesh2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glEvalPoint1, :QWORD
PROTO64 external,glEvalPoint2, :QWORD,:QWORD
PROTO64 external,glFeedbackBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,glFinish, 
PROTO64 external,glFlush, 
PROTO64 external,glFogf, :QWORD,:QWORD
PROTO64 external,glFogfv, :QWORD,:QWORD
PROTO64 external,glFogi, :QWORD,:QWORD
PROTO64 external,glFogiv, :QWORD,:QWORD
PROTO64 external,glFrontFace, :QWORD
PROTO64 external,glFrustum, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glGenLists, :QWORD
PROTO64 external,glGenTextures, :QWORD,:QWORD
PROTO64 external,glGetBooleanv, :QWORD,:QWORD
PROTO64 external,glGetClipPlane, :QWORD,:QWORD
PROTO64 external,glGetDoublev, :QWORD,:QWORD
PROTO64 external,glGetError, 
PROTO64 external,glGetFloatv, :QWORD,:QWORD
PROTO64 external,glGetIntegerv, :QWORD,:QWORD
PROTO64 external,glGetLightfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetLightiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetMapdv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetMapfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetMapiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetMaterialfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetMaterialiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetPixelMapfv, :QWORD,:QWORD
PROTO64 external,glGetPixelMapuiv, :QWORD,:QWORD
PROTO64 external,glGetPixelMapusv, :QWORD,:QWORD
PROTO64 external,glGetPointerv, :QWORD,:QWORD
PROTO64 external,glGetPolygonStipple, :QWORD
PROTO64 external,glGetString, :QWORD
PROTO64 external,glGetTexEnvfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexEnviv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexGendv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexGenfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexGeniv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexImage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexLevelParameterfv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexLevelParameteriv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexParameterfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glGetTexParameteriv, :QWORD,:QWORD,:QWORD
PROTO64 external,glHint, :QWORD,:QWORD
PROTO64 external,glIndexMask, :QWORD
PROTO64 external,glIndexPointer, :QWORD,:QWORD,:QWORD
PROTO64 external,glIndexd, :QWORD,:QWORD
PROTO64 external,glIndexdv, :QWORD
PROTO64 external,glIndexf, :QWORD
PROTO64 external,glIndexfv, :QWORD
PROTO64 external,glIndexi, :QWORD
PROTO64 external,glIndexiv, :QWORD
PROTO64 external,glIndexs, :QWORD
PROTO64 external,glIndexsv, :QWORD
PROTO64 external,glIndexub, :QWORD
PROTO64 external,glIndexubv, :QWORD
PROTO64 external,glInitNames, 
PROTO64 external,glInterleavedArrays, :QWORD,:QWORD,:QWORD
PROTO64 external,glIsEnabled, :QWORD
PROTO64 external,glIsList, :QWORD
PROTO64 external,glIsTexture, :QWORD
PROTO64 external,glLightModelf, :QWORD,:QWORD
PROTO64 external,glLightModelfv, :QWORD,:QWORD
PROTO64 external,glLightModeli, :QWORD,:QWORD
PROTO64 external,glLightModeliv, :QWORD,:QWORD
PROTO64 external,glLightf, :QWORD,:QWORD,:QWORD
PROTO64 external,glLightfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glLighti, :QWORD,:QWORD,:QWORD
PROTO64 external,glLightiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glLineStipple, :QWORD,:QWORD
PROTO64 external,glLineWidth, :QWORD
PROTO64 external,glListBase, :QWORD
PROTO64 external,glLoadIdentity, 
PROTO64 external,glLoadMatrixd, :QWORD
PROTO64 external,glLoadMatrixf, :QWORD
PROTO64 external,glLoadName, :QWORD
PROTO64 external,glLogicOp, :QWORD
PROTO64 external,glMap1d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glMap1f, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glMap2d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glMap2f, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glMapGrid1d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glMapGrid1f, :QWORD,:QWORD,:QWORD
PROTO64 external,glMapGrid2d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glMapGrid2f, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glMaterialf, :QWORD,:QWORD,:QWORD
PROTO64 external,glMaterialfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glMateriali, :QWORD,:QWORD,:QWORD
PROTO64 external,glMaterialiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glMatrixMode, :QWORD
PROTO64 external,glMultMatrixd, :QWORD
PROTO64 external,glMultMatrixf, :QWORD
PROTO64 external,glNewList, :QWORD,:QWORD
PROTO64 external,glNormal3b, :QWORD,:QWORD,:QWORD
PROTO64 external,glNormal3bv, :QWORD
PROTO64 external,glNormal3d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glNormal3dv, :QWORD
PROTO64 external,glNormal3f, :QWORD,:QWORD,:QWORD
PROTO64 external,glNormal3fv, :QWORD
PROTO64 external,glNormal3i, :QWORD,:QWORD,:QWORD
PROTO64 external,glNormal3iv, :QWORD
PROTO64 external,glNormal3s, :QWORD,:QWORD,:QWORD
PROTO64 external,glNormal3sv, :QWORD
PROTO64 external,glNormalPointer, :QWORD,:QWORD,:QWORD
PROTO64 external,glOrtho, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glPassThrough, :QWORD
PROTO64 external,glPixelMapfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glPixelMapuiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glPixelMapusv, :QWORD,:QWORD,:QWORD
PROTO64 external,glPixelStoref, :QWORD,:QWORD
PROTO64 external,glPixelStorei, :QWORD,:QWORD
PROTO64 external,glPixelTransferf, :QWORD,:QWORD
PROTO64 external,glPixelTransferi, :QWORD,:QWORD
PROTO64 external,glPixelZoom, :QWORD,:QWORD
PROTO64 external,glPointSize, :QWORD
PROTO64 external,glPolygonMode, :QWORD,:QWORD
PROTO64 external,glPolygonOffset, :QWORD,:QWORD
PROTO64 external,glPolygonStipple, :QWORD
PROTO64 external,glPopAttrib, 
PROTO64 external,glPopClientAttrib, 
PROTO64 external,glPopMatrix, 
PROTO64 external,glPopName, 
PROTO64 external,glPrioritizeTextures, :QWORD,:QWORD,:QWORD
PROTO64 external,glPushAttrib, :QWORD
PROTO64 external,glPushClientAttrib, :QWORD
PROTO64 external,glPushMatrix, 
PROTO64 external,glPushName, :QWORD
PROTO64 external,glRasterPos2d, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos2dv, :QWORD
PROTO64 external,glRasterPos2f, :QWORD,:QWORD
PROTO64 external,glRasterPos2fv, :QWORD
PROTO64 external,glRasterPos2i, :QWORD,:QWORD
PROTO64 external,glRasterPos2iv, :QWORD
PROTO64 external,glRasterPos2s, :QWORD,:QWORD
PROTO64 external,glRasterPos2sv, :QWORD
PROTO64 external,glRasterPos3d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos3dv, :QWORD
PROTO64 external,glRasterPos3f, :QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos3fv, :QWORD
PROTO64 external,glRasterPos3i, :QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos3iv, :QWORD
PROTO64 external,glRasterPos3s, :QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos3sv, :QWORD
PROTO64 external,glRasterPos4d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos4dv, :QWORD
PROTO64 external,glRasterPos4f, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos4fv, :QWORD
PROTO64 external,glRasterPos4i, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos4iv, :QWORD
PROTO64 external,glRasterPos4s, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRasterPos4sv, :QWORD
PROTO64 external,glReadBuffer, :QWORD
PROTO64 external,glReadPixels, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRectd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRectdv, :QWORD,:QWORD
PROTO64 external,glRectf, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRectfv, :QWORD,:QWORD
PROTO64 external,glRecti, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRectiv, :QWORD,:QWORD
PROTO64 external,glRects, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRectsv, :QWORD,:QWORD
PROTO64 external,glRenderMode, :QWORD
PROTO64 external,glRotated, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glRotatef, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glScaled, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glScalef, :QWORD,:QWORD,:QWORD
PROTO64 external,glScissor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glSelectBuffer, :QWORD,:QWORD
PROTO64 external,glShadeModel, :QWORD
PROTO64 external,glStencilFunc, :QWORD,:QWORD,:QWORD
PROTO64 external,glStencilMask, :QWORD
PROTO64 external,glStencilOp, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord1d, :QWORD,:QWORD
PROTO64 external,glTexCoord1dv, :QWORD
PROTO64 external,glTexCoord1f, :QWORD
PROTO64 external,glTexCoord1fv, :QWORD
PROTO64 external,glTexCoord1i, :QWORD
PROTO64 external,glTexCoord1iv, :QWORD
PROTO64 external,glTexCoord1s, :QWORD
PROTO64 external,glTexCoord1sv, :QWORD
PROTO64 external,glTexCoord2d, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord2dv, :QWORD
PROTO64 external,glTexCoord2f, :QWORD,:QWORD
PROTO64 external,glTexCoord2fv, :QWORD
PROTO64 external,glTexCoord2i, :QWORD,:QWORD
PROTO64 external,glTexCoord2iv, :QWORD
PROTO64 external,glTexCoord2s, :QWORD,:QWORD
PROTO64 external,glTexCoord2sv, :QWORD
PROTO64 external,glTexCoord3d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord3dv, :QWORD
PROTO64 external,glTexCoord3f, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord3fv, :QWORD
PROTO64 external,glTexCoord3i, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord3iv, :QWORD
PROTO64 external,glTexCoord3s, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord3sv, :QWORD
PROTO64 external,glTexCoord4d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord4dv, :QWORD
PROTO64 external,glTexCoord4f, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord4fv, :QWORD
PROTO64 external,glTexCoord4i, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord4iv, :QWORD
PROTO64 external,glTexCoord4s, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexCoord4sv, :QWORD
PROTO64 external,glTexCoordPointer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexEnvf, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexEnvfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexEnvi, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexEnviv, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexGend, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexGendv, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexGenf, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexGenfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexGeni, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexGeniv, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexImage1D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexImage2D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexParameterf, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexParameterfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexParameteri, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexParameteriv, :QWORD,:QWORD,:QWORD
PROTO64 external,glTexSubImage1D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTexSubImage2D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTranslated, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glTranslatef, :QWORD,:QWORD,:QWORD
PROTO64 external,glVertex2d, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glVertex2dv, :QWORD
PROTO64 external,glVertex2f, :QWORD,:QWORD
PROTO64 external,glVertex2fv, :QWORD
PROTO64 external,glVertex2i, :QWORD,:QWORD
PROTO64 external,glVertex2iv, :QWORD
PROTO64 external,glVertex2s, :QWORD,:QWORD
PROTO64 external,glVertex2sv, :QWORD
PROTO64 external,glVertex3d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glVertex3dv, :QWORD
PROTO64 external,glVertex3f, :QWORD,:QWORD,:QWORD
PROTO64 external,glVertex3fv, :QWORD
PROTO64 external,glVertex3i, :QWORD,:QWORD,:QWORD
PROTO64 external,glVertex3iv, :QWORD
PROTO64 external,glVertex3s, :QWORD,:QWORD,:QWORD
PROTO64 external,glVertex3sv, :QWORD
PROTO64 external,glVertex4d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glVertex4dv, :QWORD
PROTO64 external,glVertex4f, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glVertex4fv, :QWORD
PROTO64 external,glVertex4i, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glVertex4iv, :QWORD
PROTO64 external,glVertex4s, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glVertex4sv, :QWORD
PROTO64 external,glVertexPointer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glViewport, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglChoosePixelFormat, :QWORD,:QWORD
PROTO64 external,wglCopyContext, :QWORD,:QWORD,:QWORD
PROTO64 external,wglCreateContext, :QWORD
PROTO64 external,wglCreateLayerContext, :QWORD,:QWORD
PROTO64 external,wglDeleteContext, :QWORD
PROTO64 external,wglDescribeLayerPlane, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglDescribePixelFormat, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglGetCurrentContext, 
PROTO64 external,wglGetCurrentDC, 
PROTO64 external,wglGetDefaultProcAddress, :QWORD
PROTO64 external,wglGetLayerPaletteEntries, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglGetPixelFormat, :QWORD
PROTO64 external,wglGetProcAddress, :QWORD
PROTO64 external,wglMakeCurrent, :QWORD,:QWORD
PROTO64 external,wglRealizeLayerPalette, :QWORD,:QWORD,:QWORD
PROTO64 external,wglSetLayerPaletteEntries, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglSetPixelFormat, :QWORD,:QWORD,:QWORD
PROTO64 external,wglShareLists, :QWORD,:QWORD
PROTO64 external,wglSwapBuffers, :QWORD
PROTO64 external,wglSwapLayerBuffers, :QWORD,:QWORD
PROTO64 external,wglSwapMultipleBuffers, :QWORD,:QWORD
PROTO64 external,wglUseFontBitmapsA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglUseFontBitmapsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglUseFontOutlinesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wglUseFontOutlinesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file opengl32.inc
echo -----------------------------------------
ENDIF

