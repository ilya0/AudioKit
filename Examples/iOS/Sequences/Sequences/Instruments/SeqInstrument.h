//
//  SeqInstrument.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 9/18/12.
//  Copyright (c) 2012 Aurelius Prochazka. All rights reserved.
//

#import "AKFoundation.h"

@interface SeqInstrument : AKInstrument

@property AKInstrumentProperty *modulation;

@end

// -----------------------------------------------------------------------------
#  pragma mark - Sequence Instrument Note
// -----------------------------------------------------------------------------

@interface SeqInstrumentNote : AKNote

@property AKNoteProperty *frequency;

- (instancetype)initWithFrequency:(float)frequency;

@end