/* SOGoACLAdvisory.h - this file is part of SOGo
 *
 * Copyright (C) 2007-2009 Inverse inc.
 *
 * Author: Wolfgang Sourdeau <wsourdeau@inverse.ca>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef SOGOACLADVISORY_H
#define SOGOACLADVISORY_H

#import "UIxComponent.h"

@interface SOGoACLAdvisory : UIxComponent
{
  SOGoObject *aclObject;
  NSString *recipientUID;

  BOOL isSubject;
  BOOL isBody;
}

- (void) setACLObject: (SOGoObject *) newACLObject;
- (void) setRecipientUID: (NSString *) newRecipientUID;
- (void) send;

- (BOOL) isSubject;
- (BOOL) isBody;

- (NSString *) subject;
- (NSString *) body;
- (NSString *) aclMethod;

@end

@interface SOGoACLAdditionAdvisory : SOGoACLAdvisory

- (NSString *) aclMethod;

@end

@interface SOGoACLRemovalAdvisory : SOGoACLAdvisory

- (NSString *) aclMethod;

@end

@interface SOGoACLModificationAdvisory : SOGoACLAdvisory

- (NSString *) aclMethod;

@end

@interface SOGoACLBrazilianPortugueseAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLBrazilianPortugueseModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLBrazilianPortugueseRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLCzechAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLCzechModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLCzechRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLDutchAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLDutchModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLDutchRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLEnglishAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLEnglishModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLEnglishRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLFrenchAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLFrenchModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLFrenchRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLGermanAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLGermanModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLGermanRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLItalianAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLItalianModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLItalianRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLSpanishAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLSpanishModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLSpanishRemovalAdvisory : SOGoACLRemovalAdvisory
@end

@interface SOGoACLRussianAdditionAdvisory : SOGoACLAdditionAdvisory
@end

@interface SOGoACLRussianModificationAdvisory : SOGoACLModificationAdvisory
@end

@interface SOGoACLRussianRemovalAdvisory : SOGoACLRemovalAdvisory
@end

#endif /* SOGOACLADVISORY_H */
