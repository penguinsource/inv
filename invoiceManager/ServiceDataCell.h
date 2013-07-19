//
//  CustomTableCellData.h
//  invoiceManager
//
//  Created by Mihai on 2013-05-22.
//  Copyright (c) 2013 Mihai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CustomTableViewCell.h"

/*
 serviceType = { carpet | upholstery | mattress | repair | reservice | flood }
 
 carpet service:
 name (Entrance | Master Bedroom | Living Room | ... | Stairs / Landings)
 itemAttribute (Room | Stairs)       {any type of room name => itemAttribute = Room type. If name = Stairs / Landings, itemAttribute = Stairs}
 notes
 rlength
 rwidth
 price
 priceRate
 quantity = # of stairs
 quantity2 = # of landings
 
 -------------------------------------------
 matress service:
 name - item name (King size, queen size, double)
 vacOrFull - (power-vac only | full clean)
 quantity - ..
 notes - ..
 addonBiocide, addonDeodorizer, addonFabricProtector - booleans
 
 -------------------------------------------
 upholstery service:
 name = upholstery item name
 materialType = leather, synthetic, natural, specialty
 vacOrFull = (power-vac only | full clean)
 quantity = ..
 price = full price ( quantity * price per item, which is hardcoded )
 notes - ..
 
 -------------------------------------------

 miscellaneous:
 name, price per item ( = priceRate ), quantity;
 
 -------------------------------------------
 area rugs:
 
 name = 2x3, 3x6, 9x12..etc
 materialType = (synthetic | wool)
 quantity = ..
 price = ..
 note = ..
 addons..
 
 */

@interface ServiceDataCell : NSObject {
    NSString *serviceType;
    
    NSString *name;
    NSString *itemAttribute;
    bool addonDeodorizer;
    bool addonFabricProtector;
    bool addonBiocide;
    // [0] == deodorizer, [1] == fabric protector, [2] == biocide
    
    NSString *notes;
    float rlength, rwidth;
    float price;
    float priceRate;
    
    NSString *vacOrFull;
    
    NSInteger quantity, quantity2;

    NSString *materialType;
    
    NSInteger noOfHours;
    float ratePerHr;
}

@property (assign, readwrite) bool addonBiocide, addonDeodorizer, addonFabricProtector;
@property (assign, readwrite) NSString *serviceType;
@property (assign, readwrite) NSInteger quantity, quantity2;
@property (assign, readwrite) NSInteger cellNumber;
@property (copy, readwrite) NSString *name, *materialType, *itemAttribute;
@property (copy, readwrite) NSString *notes;
@property (assign, readwrite) float rlength, rwidth, price, ratePerHr, priceRate;

@property (copy) NSString *vacOrFull;
@end
