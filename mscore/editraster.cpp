//=============================================================================
//  MuseScore
//  Linux Music Score Editor
//  $Id: mscore.cpp 4014 2011-02-14 14:30:49Z wschweer $
//
//  Copyright (C) 2011 Werner Schweer and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================

#include "editraster.h"
#include "libmscore/mscore.h"

//---------------------------------------------------------
//   EditRaster
//---------------------------------------------------------

EditRaster::EditRaster(QWidget* parent)
   : QDialog(parent)
      {
      setupUi(this);
      hraster->setValue(MScore::hRaster());
      vraster->setValue(MScore::vRaster());
      }

//---------------------------------------------------------
//   accept
//---------------------------------------------------------

void EditRaster::accept()
      {
      MScore::setHRaster(hraster->value());
      MScore::setVRaster(vraster->value());
      QDialog::accept();
      }


