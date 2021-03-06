type t = Dom.mutationRecord;

external type_ : t => string = "type" [@@bs.get];
external target : t => Dom.node = "" [@@bs.get];
external addedNodes : t => Dom.nodeList = "" [@@bs.get];
external removedNodes : t => Dom.nodeList = "" [@@bs.get];
external previousSibling : t => option Dom.node = "" [@@bs.get];
external pnextSibling : t => option Dom.node = "" [@@bs.get];
external attributeName : t => string = "" [@@bs.get];
external attributeNamespace : t => string = "" [@@bs.get];
external oldValue : t => string = "" [@@bs.get];