A) Top panel: transport bar + edit type selection:
##################################################

1: start/stop     : start playing when stop, stop playing when playing
2: step mode      : step sequencer and if maintained select current note with grid panel
3: track length   : edit track length
4: track pitch    : edit default track pitch
5: track velocity : edit default track velocity
6: note length    : edit current note length
7: note pitch     : edit current note pitch
8: note velocity  : edit current note velocity


B) Rigth panel: current track selector:
######################################

[1,8]


C) Grid panel: value editor:
############################

type 1 (start/stop)     : nothing
type 2 (step mode)      : current note selection 
type 3 (track length)   : track length editor
type 4 (track pitch)    : track pitch editor
type 5 (track velocity) : track velocity editor
type 6 (note length)    : note length editor
type 7 (note pitch)     : note pitch editor
type 8 (note velocity)  : note velocity editor

##############################################
Data model:
##############################################

global:Global
  int tempo
  (int swing)
  tracks:MidiTrack[8]

MidiTrack
  int index
  int midi_chan
  int midi_vol
  int midi_port
  int is_muted
  
patterns:Pattern[]

(Pattern
  int tempo
  (int swing)
  seqSlots:SeqSlot[8])

songs:Song[]

Song
  symbol name
  seqSlots:SeqSlot[]
  cc_automations:Automation[]
  
SeqSlot
  length:int
  isMuted:int
  trackIndex:int
  notes:NoteSlot[]
  cc_automations:Automation[]

NoteSlot
  note:Note
  cc_automations:Automation[]

Automation
  cc_number:int
  midi_chan:int
  midi_port:int
  automation_values:AutomationValue[]

AutomationValue
  value:int
  offset:int    

Note
  int pitch
  int velocity
  int length


  

