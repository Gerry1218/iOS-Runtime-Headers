/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapAccess, GEOMapTileFinder, GEOVectorTile, NSMutableArray;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {
    struct { 
        double latitude; 
        double longitude; 
    NSMutableArray *_builders;
    } _coordinate;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_junction;
    GEOMapAccess *_map;
    GEOVectorTile *_tile;
    GEOMapTileFinder *_tileFinder;
}

- (id).cxx_construct;
- (void)_findConnections:(id)arg1 incoming:(BOOL)arg2;
- (void)cancel;
- (void)dealloc;
- (void)findConnectionsIn:(id)arg1;
- (void)findConnectionsOut:(id)arg1;
- (id)initWithMap:(id)arg1 tile:(id)arg2 junction:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)arg3 coordinate:(struct { double x1; double x2; })arg4;

@end
